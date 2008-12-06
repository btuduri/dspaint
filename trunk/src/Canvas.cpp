#include "Canvas.h"

namespace DSPaint
{
	Canvas::Canvas(u16 backgroundColour)
	{
	    this->dimension.width = NDS_SCREEN_MAX_WIDTH;
		this->dimension.height = NDS_SCREEN_MAX_HEIGHT;
		this->backgroundColour = backgroundColour;

		this->Clear();
	}

    DIMENSION Canvas::GetDimensions()
    {
    	return this->dimension;
    }

    u16 Canvas::GetBackgroundColour()
    {
        return this->backgroundColour;
    }

    void Canvas::SetBackgroundColour(u16 backgroundColour)
    {
        this->backgroundColour = backgroundColour;
    }

    u16 Canvas::GetPixel(int x, int y)
    {
    	return PA_Get16bitPixel(0, x, y);
    }

    void Canvas::SetPixel(s16 x, s16 y, u16 colour)
    {
        PA_Put16bitPixel(BOTTOM_SCREEN, x, y, colour);
    }

    void Canvas::Clear()
    {
        // reinitialise graphics
        PA_Init16bitBg(BOTTOM_SCREEN, 3);

		// set each individual pixel to the background colour
		// (this is an extremely slow way to draw)
		for (int i = 0; i < NDS_SCREEN_MAX_WIDTH; i++)
		{
		    for (int j = 0; j < NDS_SCREEN_MAX_HEIGHT; j++)
		    {
                PA_Put16bitPixel(BOTTOM_SCREEN, i, j, backgroundColour);
		    }
		}
    }
}
