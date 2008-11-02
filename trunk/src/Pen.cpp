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

	void Pen::SetWidth(int width)
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
}
