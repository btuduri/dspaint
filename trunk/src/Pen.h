#ifndef PEN_H
#define PEN_H

#include "IPen.h"

namespace DSPaint
{
	class Pen: public IPen
	{
		public:
            /**
			 * Creates a new pen.
			 * @colour The colour of the pen.
			 */
            Pen(u16 colour = PA_RGB(0,0,0));

            /**
			 * Gets the width of the pen.
			 */
			virtual int GetWidth();

            /**
			 * Sets the width of the pen.
			 * @width The width to set.
			 */
			virtual void SetWidth(int width);

            /**
			 * Gets the colour of the pen.
			 */
			virtual u16 GetColour();

            /**
			 * Sets the colour of the pen.
			 * @colour The colour to set.
			 */
			virtual void SetColour(u16 colour);

			/**
			 * Draws on the canvas using this pen.
			 * @canvas The canvas to draw on.
			 * @x The X coordinate.
			 * @y The Y coordinate.
			 */
			virtual void Draw(Canvas canvas, int x, int y);
	};
}

#endif
