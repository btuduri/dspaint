#include <nds.h>
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

	// set the video mode
	// default is black screen
	videoSetMode(MODE_FB0);
	vramSetBankA(VRAM_A_LCD);

	// draw onto the bottom screen
	lcdMainOnBottom();

	// loop for processing commands
	while (true)
	{
		// this is to keep the DS stop wasting 100% CPU in the loop
		swiWaitForVBlank();

		// get the position of the touch screen position
		touchXY = touchReadXY();

		// set that pixel to black
		VRAM_A[touchXY.px + touchXY.py * NDS_SCREEN_MAX_WIDTH] = RGB15(0, 0, 0);
	}

	return 0;
}
