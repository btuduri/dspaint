#ifndef PEN_H
#define PEN_H

#include <PA9.h>

#include "AbstractPen.h"

namespace DSPaint
{
	class Pen: public AbstractPen
	{
		public:
			/**
			 * Destroys the pen.
			 */
			~Pen();

			/**
			 * Draws on the canvas using this pen.
			 * @canvas The canvas to draw on.
			 * @x The X coordinate.
			 * @y The Y coordinate.
			 */
			void Draw(Canvas canvas, s16 x, s16 y);

			/**
			 * Draws a line onto the canvas.
			 * @canvas The canvas to draw on.
			 * @x1 First X point.
			 * @y1 First Y point.
			 * @x2 Second X point.
			 * @y2 Second Y point.
			 */
			void Draw(Canvas canvas, s16 x1, s16 y1, s16 x2, s16 y2);
	};
}

#endif
