#include <PA9.h>
#include "Canvas.h"
#include "Constants.h"

namespace DSPaint
{
	Canvas::Canvas(u16 background)
	{
	    this->dimension.width = NDS_SCREEN_MAX_WIDTH;
		this->dimension.height = NDS_SCREEN_MAX_HEIGHT;
		this->backgroundColour = background;

		this->Clear();
	}

    Dimension Canvas::GetDimensions()
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
        PA_Put16bitPixel(ACTIVE_SCREEN, x, y, colour);
    }

    void Canvas::Draw(u16 colour)
    {
        // put colour as first entry in pallette
        PA_SetBgPalCol(0, 1, colour);

        // draw using first entry in pallette
    	PA_16bitDraw(ACTIVE_SCREEN, 1);
    }

    void Canvas::Clear()
    {
        // reinitialise graphics
        PA_Init16bitBg(ACTIVE_SCREEN, 3);

		// set each individual pixel to the background colour
		// (this is an extremely slow way to draw)
		for (int i = 0; i < NDS_SCREEN_MAX_WIDTH; i++)
		{
		    for (int j = 0; j < NDS_SCREEN_MAX_HEIGHT; j++)
		    {
                PA_Put16bitPixel(ACTIVE_SCREEN, i, j, backgroundColour);
		    }
		}
    }
}
