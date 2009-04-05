#include "Options.h"

namespace DSPaint
{
	Options::Options()
	{
	}

	Options::~Options()
	{
	}

	void Options::Save()
	{
	}

	Canvas* Options::GetCanvas()
	{
		return this->canvas;
	}

	void Options::SetCanvas(Canvas *canvas)
	{
		if (canvas != NULL)
			this->canvas = canvas;
	}

	AbstractPen* Options::GetPen()
	{
		return this->pen;
	}

	void Options::SetPen(AbstractPen *pen)
	{
		if (pen != NULL)
		{
			this->pen = pen;
		}
	}
}
