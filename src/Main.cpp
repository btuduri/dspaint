#include <PA9.h>
#include "Constants.h"
#include "Canvas.h"

// entry point
int main()
{
	// this is the struct for when the DS touches the screen
	touchPosition touchXY;

	// always needs to have
	irqInit();
	irqEnable(IRQ_VBLANK);

	// create a new canvas and clear the screen
	DSPaint::Canvas canvas;
	canvas.Clear();

	// loop for processing commands
	while (true)
	{
		// this is to keep the DS stop wasting 100% CPU in the loop
		swiWaitForVBlank();

		// get the position of the touch screen position
		touchXY = touchReadXY();

		// set that pixel to black
		canvas.SetPixel(touchXY.px, touchXY.py, RGB15(0, 0, 0));
	}

	return 0;
}
