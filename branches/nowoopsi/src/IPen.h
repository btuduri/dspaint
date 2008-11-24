#ifndef IPEN_H
#define IPEN_H

#include "Canvas.h"

namespace DSPaint
{
	class IPen
	{
		protected:
			u8 _width;
			u16 _colour;

		public:
			/**
			 * Gets the width of the pen.
			 */
			virtual u8 GetWidth() = 0;

			/**
			 * Sets the width of the pen.
			 * @width The width to set.
			 */
			virtual void SetWidth(u8 width) = 0;

			/**
			 * Gets the colour of the pen.
			 */
			virtual u16 GetColour() = 0;

			/**
			 * Sets the colour of the pen.
			 * @colour The colour to set.
			 */
			virtual void SetColour(u16 colour) = 0;

			/**
			 * Draws on the canvas using this pen.
			 * @canvas The canvas to draw on.
			 * @x The X coordinate.
			 * @y The Y coordinate.
			 */
			virtual void Draw(Canvas canvas, s16 x, s16 y) = 0;

			/**
			 * Draws a line onto the canvas.
			 * @canvas The canvas to draw on.
			 * @x1 First X point.
			 * @y1 First Y point.
			 * @x2 Second X point.
			 * @y2 Second Y point.
			 */
			virtual void DrawLine(Canvas canvas, s16 x1, s16 y1, s16 x2, s16 y2) = 0;
	};
}

#endif
