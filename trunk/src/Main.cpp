#include <PA9.h>
#include "Constants.h"
#include "Canvas.h"

// entry point
int main()
{
    // init
    PA_Init();

    // init touch screen drawing
    PA_InitVBL();

	// create a new canvas
	DSPaint::Canvas canvas;

	// loop for processing commands
	while (true)
	{
        // don't waste 100% CPU
		PA_WaitForVBL();

		// set current touch screen pixel to black
        canvas.Draw(RGB15(0, 0, 0));
	}

	return 0;
}
