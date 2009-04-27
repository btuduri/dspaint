#include "ModeFactory.h"

namespace DSPaint
{
	ModeFactory::ModeFactory()
	{
	}

	ModeFactory::~ModeFactory()
	{
	}

	AbstractMode *ModeFactory::GetMode(Mode mode)
	{
		switch (mode)
		{
			case ERASER_MODE:
				return new EraserMode();
			default:
				return new PenMode();
		}
	}
}
