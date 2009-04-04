#include "AbstractPen.h"

namespace DSPaint
{
	AbstractPen::AbstractPen()
	{
		// black colour
		m_width = 1;
		m_colour = PA_RGB(0,0,0);
	}

	AbstractPen::~AbstractPen()
	{
	}

	u8 AbstractPen::GetWidth()
	{
		return m_width;
	}

	void AbstractPen::SetWidth(u8 width)
	{
		m_width = width;
	}

	u16 AbstractPen::GetColour()
	{
		return m_colour;
	}

	void AbstractPen::SetColour(u16 colour)
	{
		m_colour = colour;
	}

	void AbstractPen::Draw(Canvas canvas, s16 x, s16 y)
	{
	}

	void AbstractPen::Draw(Canvas canvas, s16 x1, s16 y1, s16 x2, s16 y2)
	{
	}
}
