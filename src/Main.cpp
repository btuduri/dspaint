#include "DSPaint.h"

#include "Canvas.h"
#include "ModeManager.h"
#include "AbstractMode.h"
#include "Options.h"
#include "Pen.h"
#include "PromptManager.h"

// entry point
int main(int argc, char* argv[])
{
	// Init
	PA_Init();

	// Init touch screen drawing
	PA_InitVBL();

	// Init the console
	PA_InitText(TOP_SCREEN, 0);
	PA_SetTextCol(1, 31, 31, 31);

	DSPaint::Options& options = DSPaint::Options::Instance();

	// Create mode manager
	DSPaint::ModeManager mm;
	options.SetCurrentMode(new DSPaint::PenMode());
	//mm.SetCurrentMode(DSPaint::ModeManager::pen_mode);
	DSPaint::PromptManager::ShowMode(options.GetCurrentMode());

	// Create a new canvas
	DSPaint::Canvas canvas;

	// Create a new pen
	DSPaint::AbstractPen *pen = new DSPaint::Pen();

	// Create a new options and store stuff so that the modes can use it
	options.SetPen(pen);
	options.SetCanvas(&canvas);

	// Loop for processing commands
	while (true)
	{
		// Don't waste 100% CPU
		PA_WaitForVBL();

		DSPaint::PromptManager::ShowMode(options.GetCurrentMode());
		// check if stylus is pressed or held
		if (Stylus.Newpress)
		{
			s16 low = (PA_drawsize[BOTTOM_SCREEN] >> 1) - PA_drawsize[BOTTOM_SCREEN] + 1;
			s16 high = (PA_drawsize[BOTTOM_SCREEN] >> 1) + 1;
			s16 i = 0, j = 0;

			for (i = low; i < high; i++)
			{
				for (j = low; j < high; j++)
				{
					s16 xi = Stylus.X + i;
					s16 yj = Stylus.Y + j;

					if ((xi >= 0) && (yj >= 0) && (xi < NDS_SCREEN_MAX_WIDTH) && (yj < NDS_SCREEN_MAX_HEIGHT))
						pen->Draw(canvas, Stylus.X, Stylus.Y);
				}
			}
		}
		else if (Stylus.Held)
		{
			if (PA_olddowntime[BOTTOM_SCREEN] != (Stylus.Downtime - 1))
			{
				PA_oldx[BOTTOM_SCREEN] = Stylus.X;
				PA_oldy[BOTTOM_SCREEN] = Stylus.Y;
			}

			pen->Draw(canvas, Stylus.X, Stylus.Y, PA_oldx[BOTTOM_SCREEN], PA_oldy[BOTTOM_SCREEN]);
		}

		PA_oldx[BOTTOM_SCREEN] = Stylus.X;
		PA_oldy[BOTTOM_SCREEN] = Stylus.Y;
		PA_olddowntime[BOTTOM_SCREEN] = Stylus.Downtime;

		// new method for each button press
		// the IOperationalMode should handle the rest of the button presses
		if (Pad.Released.A)
		{
			options.GetCurrentMode()->A();
		}
		else if (Pad.Released.B)
		{
			options.GetCurrentMode()->B();
		}
		else if (Pad.Released.X)
		{
			options.GetCurrentMode()->X();
		}
		else if (Pad.Released.Y)
		{
			options.GetCurrentMode()->Y();
		}
		else if (Pad.Released.Up)
		{
			options.GetCurrentMode()->Up();
		}
		else if (Pad.Released.Down)
		{
			options.GetCurrentMode()->Down();
		}
		else if (Pad.Released.Left)
		{
			options.GetCurrentMode()->Left();
		}
		else if (Pad.Released.Right)
		{
			options.GetCurrentMode()->Right();
		}
		else if (Pad.Released.Start)
		{
			options.GetCurrentMode()->Start();
		}
		else if (Pad.Released.Select)
		{
			options.GetCurrentMode()->Select();
		}
		else if (Pad.Released.L || Pad.Released.R)
		{
			int res = DSPaint::PromptManager::ShowMessagePrompt(
				"Choose an option",
				2,
				"New image",
				"Change mode"
			);

			switch (res)
			{
				case 1:
					res = DSPaint::PromptManager::ShowMessagePrompt(
							"Are you sure you want to clear the image?",
							2,
							"Yes",
							"No"
						);

					if (res == 1)
					{
						canvas.Clear();
					}
					break;

				case 2:
					res = DSPaint::PromptManager::ShowModePrompt(mm.GetModes());

					if (res == 1)
					{
						options.SetCurrentMode(new DSPaint::PenMode());
						DSPaint::PromptManager::ShowMode(options.GetCurrentMode());
					}
					else if (res == 2)
					{
						options.SetCurrentMode(new DSPaint::EraserMode());
						DSPaint::PromptManager::ShowMode(options.GetCurrentMode());
					}
					break;
			}
		}
	}

	return 0;
}
