#include <nds.h>
#include "Canvas.h"
#include "Constants.h"

namespace DSPaint
{
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

    void Canvas::Clear()
    {
    	// get the max number of pixels
		int max = NDS_SCREEN_MAX_WIDTH * NDS_SCREEN_MAX_HEIGHT;

		// set each individual pixel to white
		for (int i = 0; i < max; i++)
		{
			VRAM_A[i] = RGB15(31, 31, 31);
		}
    }
}
