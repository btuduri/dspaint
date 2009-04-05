#include "Options.h"

namespace DSPaint
{
	Options::Options(char *file)
	{
		// currently does nothing
	}

	void Options::Save()
	{
		// currently does nothing
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
