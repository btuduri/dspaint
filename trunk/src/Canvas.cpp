#include <nds.h>
#include "Canvas.h"
#include "Constants.h"

namespace DSPaint
{
    int* Canvas::GetDimensions(int* array)
    {
        array[0] = NDS_SCREEN_MAX_WIDTH;
        array[1] = NDS_SCREEN_MAX_HEIGHT;

        return array;
    }

    int Canvas::GetBackgroundColour()
    {
        return backgroundColour;
    }

    void Canvas::SetBackgroundColour(int backgroundColour)
    {
        this->backgroundColour = backgroundColour;
    }
}
