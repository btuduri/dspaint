#include <PA9.h>

#include "Canvas.h"
#include "ModeManager.h"
#include "IOperationalMode.h"
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

    // Create mode manager
    DSPaint::ModeManager mm;
    DSPaint::PromptManager::ShowMode(mm.GetCurrentMode());

	// Create a new canvas
	DSPaint::Canvas canvas;

	// Create a new pen
	DSPaint::Pen pen;

	// Loop for processing commands
	while (true)
	{
        // Don't waste 100% CPU
		PA_WaitForVBL();

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
						pen.Draw(canvas, Stylus.X, Stylus.Y);
				}
			}
		}
		else if (Stylus.Held)
		{
			if(PA_olddowntime[BOTTOM_SCREEN] != (Stylus.Downtime - 1))
			{
				PA_oldx[BOTTOM_SCREEN] = Stylus.X;
				PA_oldy[BOTTOM_SCREEN] = Stylus.Y;
			}

			pen.DrawLine(canvas, Stylus.X, Stylus.Y, PA_oldx[BOTTOM_SCREEN], PA_oldy[BOTTOM_SCREEN]);
		}

		PA_oldx[BOTTOM_SCREEN] = Stylus.X;
		PA_oldy[BOTTOM_SCREEN] = Stylus.Y;
		PA_olddowntime[BOTTOM_SCREEN] = Stylus.Downtime;

		// put pad key presses here for actions
		if (Pad.Released.L || Pad.Released.R)
		{
			int res = DSPaint::PromptManager::ShowMessagePrompt("Choose an option", 2, "New image", "Change mode");

            if (res == 1)
            {
            	res = DSPaint::PromptManager::ShowMessagePrompt("Are you sure you want to clear the image?", 2, "Yes", "No");

            	if (res == 1)
            	{
            		canvas.Clear();
            	}
            }
            else if (res == 2)
            {
            	res = DSPaint::PromptManager::ShowModePrompt(mm.GetModes());
            }
		}
	}

	return 0;
}
