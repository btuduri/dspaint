#include "Pen.h"

namespace DSPaint
{
	int Pen::GetWidth()
	{
		return _width;
	}

	void Pen::SetWidth(int width)
	{
		_width = width;
	}

	int Pen::GetColour()
	{
		return _colour;
	}

	void Pen::SetColour(int colour)
	{
		_colour = colour;
	}
}
