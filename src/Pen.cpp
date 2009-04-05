#include "Pen.h"

namespace DSPaint
{
	Pen::~Pen()
	{
	}

	void Pen::Draw(Canvas canvas, s16 x, s16 y)
	{
		canvas.DrawPoint(x, y, this->m_colour);
	}

	void Pen::Draw(Canvas canvas, s16 x1, s16 y1, s16 x2, s16 y2)
	{
		canvas.DrawLine(x1, y1, x2, y2, this->m_colour, this->m_width);
	}
}
