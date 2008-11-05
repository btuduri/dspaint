#include <PA9.h>

#include "Constants.h"
#include "Canvas.h"
#include "Pen.h"

// entry point
int main()
{
    // Init
    PA_Init();

    // Init touch screen drawing
    PA_InitVBL();

	// Create a new canvas
	DSPaint::Canvas canvas;

	// Create a new pen
	DSPaint::Pen pen;

	// Loop for processing commands
	while (true)
	{
        // Don't waste 100% CPU
		PA_WaitForVBL();

		//PA_UpdateStylus();

		// Draw on the canvas where the stylus is.
		//canvas.SetPixel(Stylus.X, Stylus.Y);
        //canvas.Draw(pen);

		//pen.Draw(canvas, Stylus.X, Stylus.Y);


		if (Stylus.Newpress) {
			s16 low = (PA_drawsize[ACTIVE_SCREEN] >> 1) - PA_drawsize[ACTIVE_SCREEN]+1;
			s16 high = (PA_drawsize[ACTIVE_SCREEN] >> 1)+1;
			s16 i = 0, j = 0;

			for (i = low; i < high; i++)
				for (j = low; j < high; j++)
					if ((Stylus.X+i >= 0) && (Stylus.Y+j >= 0) && (Stylus.X+i < NDS_SCREEN_MAX_WIDTH) && (Stylus.Y+j < NDS_SCREEN_MAX_HEIGHT))
						pen.Draw(canvas, Stylus.X, Stylus.Y);
		}
		else if (Stylus.Held) {
			if(PA_olddowntime[ACTIVE_SCREEN] != (Stylus.Downtime-1)) {
				PA_oldx[ACTIVE_SCREEN] = Stylus.X;
				PA_oldy[ACTIVE_SCREEN] = Stylus.Y;
			}

			PA_Draw16bitLineEx(ACTIVE_SCREEN, Stylus.X, Stylus.Y, PA_oldx[ACTIVE_SCREEN], PA_oldy[ACTIVE_SCREEN], PA_RGB(0, 0, 0), PA_drawsize[ACTIVE_SCREEN]);
		}

		PA_oldx[ACTIVE_SCREEN] = Stylus.X;
		PA_oldy[ACTIVE_SCREEN] = Stylus.Y;
		PA_olddowntime[ACTIVE_SCREEN] = Stylus.Downtime;
	}

	return 0;
}
