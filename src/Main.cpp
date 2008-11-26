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
    PA_InitText(SUB_SCREEN, 0);
    PA_SetTextCol(1, 31, 31, 31);

    // Create mode manager
    DSPaint::ModeManager mm;
    DSPaint::IOperationalMode** modeList;
    modeList = mm.GetModeList();
    DSPaint::PromptManager::ShowMode(mm.GetCurrentModeName());

	// Display a example prompt
    DSPaint::PromptManager::ShowMessagePrompt(
		"Press a button and do something and see if this text wraps round",
		"I",
		"am",
		"a",
		"very",
		"long",
		"word",
		"!!!"
	);

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
			s16 low = (PA_drawsize[ACTIVE_SCREEN] >> 1) - PA_drawsize[ACTIVE_SCREEN] + 1;
			s16 high = (PA_drawsize[ACTIVE_SCREEN] >> 1) + 1;
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
			if(PA_olddowntime[ACTIVE_SCREEN] != (Stylus.Downtime - 1))
			{
				PA_oldx[ACTIVE_SCREEN] = Stylus.X;
				PA_oldy[ACTIVE_SCREEN] = Stylus.Y;
			}

			pen.DrawLine(canvas, Stylus.X, Stylus.Y, PA_oldx[ACTIVE_SCREEN], PA_oldy[ACTIVE_SCREEN]);
		}

		PA_oldx[ACTIVE_SCREEN] = Stylus.X;
		PA_oldy[ACTIVE_SCREEN] = Stylus.Y;
		PA_olddowntime[ACTIVE_SCREEN] = Stylus.Downtime;
		// put pad key presses here for actions
		if (Pad.Newpress.L || Pad.Released.R)
		{
			//TODO: Create a dialog to confirm clear screen
			canvas.Clear();
            DSPaint::PromptManager::ShowMode(mm.GetCurrentModeName());
		}
	}

	return 0;
}
