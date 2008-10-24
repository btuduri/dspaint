#ifndef PEN_H
#define PEN_H

#include "IPen.h"

namespace DSPaint
{
	class Pen: public IPen
	{
		public:
			virtual int GetWidth() = 0;
			virtual void SetWidth(int width) = 0;
			virtual int GetColour() = 0;
			virtual void SetColour(int colour) = 0;
	};
}

#endif
