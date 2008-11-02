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

		// Draw on the canvas where the stylus is.
        canvas.Draw(pen);
	}

	return 0;
}
