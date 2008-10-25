#include <nds.h>
#include "Canvas.h"
#include "Constants.h"

namespace DSPaint
{
	Canvas::Canvas(int width, int height, int background)
	{
		if (width < 1)
			width = NDS_SCREEN_MAX_WIDTH;
		else
			this->dimension.width = width;

		if (height < 1)
			height = NDS_SCREEN_MAX_HEIGHT;
		else
			this->dimension.height = height;

		this->backgroundColour = background;

		// set the video mode
		// default is black screen
		videoSetMode(MODE_FB0);
		vramSetBankA(VRAM_A_LCD);

		// draw onto the bottom screen
		lcdMainOnBottom();
	}

    DIMENSION Canvas::GetDimensions()
    {
    	return this->dimension;
    }

    int Canvas::GetBackgroundColour()
    {
        return this->backgroundColour;
    }

    void Canvas::SetBackgroundColour(int backgroundColour)
    {
        this->backgroundColour = backgroundColour;
    }

    int Canvas::GetPixel(int x, int y)
    {
    	return VRAM_A[x + y * NDS_SCREEN_MAX_WIDTH];
    }

    void Canvas::SetPixel(int x, int y, int colour)
    {
    	VRAM_A[x + y * NDS_SCREEN_MAX_WIDTH] = colour;
    }

    void Canvas::Clear()
    {
    	// get the max number of pixels
		int max = NDS_SCREEN_MAX_WIDTH * NDS_SCREEN_MAX_HEIGHT;

		// set each individual pixel to the background colour
		for (int i = 0; i < max; i++)
		{
			VRAM_A[i] = this->backgroundColour;
		}
    }
}
