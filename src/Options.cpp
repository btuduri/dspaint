#include "Options.h"

namespace DSPaint
{
	Options::Options(char* file)
	{
		// currently does nothing
	}

	void Options::Save()
	{
		// currently does nothing
	}

	IPen* Options::GetPen()
	{
		return this->pen;
	}

	void Options::SetPen(IPen *pen)
	{
		if (pen != NULL)
		{
			this->pen = pen;
		}
	}
}
