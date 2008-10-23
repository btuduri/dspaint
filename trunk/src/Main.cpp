#include <nds.h>
#include "Constants.h"
#include "Canvas.h"

// sets the screen to white
// this is dependant on whichever screen is currently being set
void clear()
{
	// get the max number of pixels
	int max = NDS_SCREEN_MAX_WIDTH * NDS_SCREEN_MAX_HEIGHT;

	// set each individual pixel to white
	for (int i = 0; i < max; i++)
	{
		VRAM_A[i] = RGB15(31, 31, 31);
	}
}

// entry point
int main(void)
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

	// clear the screen
	clear();

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
