#include "IPen.h"

namespace DSPaint
{
	class Pen: public IPen
	{
		int GetWidth()
		{
			return _width;
		}

		void SetWidth(int width)
		{
			_width = width;
		}

		int GetColour()
		{
			return _colour;
		}

		void SetColour(int colour)
		{
			_colour = colour;
		}
	};
}
