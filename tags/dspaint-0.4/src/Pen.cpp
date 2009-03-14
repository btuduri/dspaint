#include <PA9.h>

#include "Pen.h"

namespace DSPaint
{
    Pen::Pen(u16 colour)
	{
		this->SetWidth(1);
	    this->SetColour(colour);
	}

	Pen::~Pen()
	{
	}

	u8 Pen::GetWidth()
	{
		return this->_width;
	}

	void Pen::SetWidth(u8 width)
	{
		if (width > 0)
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

	void Pen::Draw(Canvas canvas, s16 x, s16 y) //Draw point
	{
		canvas.DrawPoint(x, y, this->_colour);
	}

	void Pen::Draw(Canvas canvas, s16 x1, s16 y1, s16 x2, s16 y2) //Draw line
	{
        canvas.DrawLine(x1, y1, x2, y2, this->_colour, this->_width);
	}
}
