#ifndef ABSTRACTPEN_H
#define ABSTRACTPEN_H

#include "Canvas.h"

namespace DSPaint
{
	/**
	 * Provides common functions for a pen.
	 * The child class should override the Draw() methods.
	 */
	class AbstractPen
	{
		protected:
			u8 m_width;
			u16 m_colour;

		public:
			/**
			 * Constructs a new AbstractPen.
			 */
			AbstractPen();

			/**
			 * Destroys the pen.
			 */
			virtual ~AbstractPen();

			/**
			 * Gets the width of the pen.
			 */
			u8 GetWidth();

			/**
			 * Sets the width of the pen.
			 * @width The width to set.
			 */
			void SetWidth(u8 width);

			/**
			 * Gets the colour of the pen.
			 */
			u16 GetColour();

			/**
			 * Sets the colour of the pen.
			 * @colour The colour to set.
			 */
			void SetColour(u16 colour);

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
			virtual void Draw(Canvas canvas, s16 x1, s16 y1, s16 x2, s16 y2);
	};
}

#endif
