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
			virtual void SetWidth(s8 width);

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
			virtual void Draw(Canvas canvas, s16 x, s16 y);

			/**
			 * Draws a line onto the canvas.
			 * @canvas The canvas to draw on.
			 * @x1 First X point.
			 * @y1 First Y point.
			 * @x2 Second X point.
			 * @y2 Second Y point.
			 */
			virtual void DrawLine(Canvas canvas, s16 x1, s16 y1, s16 x2, s16 y2);
	};
}

#endif
