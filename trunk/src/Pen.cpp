#include <PA9.h>

#include "Pen.h"

namespace DSPaint
{
    Pen::Pen(u16 colour)
	{
	    this->SetColour(colour);
	}

	int Pen::GetWidth()
	{
		return this->_width;
	}

	void Pen::SetWidth(s8 width)
	{
		this->_width = width;
	}

	u16 Pen::GetColour()
	{
		return this->_colour;
	}

	void Pen::SetColour(u16 colour)
	{
		this->_colour = colour;
	}

	void Pen::Draw(Canvas canvas, s16 x, s16 y)
	{
		canvas.SetPixel(x, y, this->_colour);
	}

	void Pen::DrawLine(Canvas canvas, s16 x1, s16 y1, s16 x2, s16 y2)
	{

	}
}
