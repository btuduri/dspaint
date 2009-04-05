#ifndef CANVAS_H
#define CANVAS_H

#include <PA9.h>

#include "DSPaint.h"
#include "Dimension.h"

namespace DSPaint
{
    class Canvas
    {
        protected:
			DIMENSION dimension;
			u16 backgroundColour;
			u16 foregroundColour;

        public:
			/**
			 * Creates a new canvas with the default colours.
			 */
			Canvas();

			/**
			 * Gets the dimensions of this canvas.
			 */
			DIMENSION GetDimension();

			/**
			 * Gets the background colour of this canvas.
			 */
			u16 GetBackgroundColour();

			/**
			 * Sets the background colour of this canvas.
			 * @backgroundColour The background colour of this canvas.
			 */
			void SetBackgroundColour(u16 backgroundColour);

			/**
			 * Gets the foreground colour.
			 */
			u16 GetForegroundColour();

			/**
			 * Sets the foregroumnd colour.
			 */
			void SetForegroundColour(u16 colour);

			/**
			 * Gets a colour from a pixel.
			 * @x The x position.
			 * @y The y position.
			 * @return The colour at xy.
			 */
			u16 GetPixel(int x, int y);

			/**
			 * Sets a pixel to a colour.
			 * @x The x position.
			 * @y The y position.
			 * @colour The colour to use.
			 */
			void DrawPoint(s16 x, s16 y, u16 colour);

			/**
			 * Sets a line of pixels to a colour.
			 * @x1 The start x of the line.
			 * @y1 The start y of the line.
             * @x2 The end x of the line.
			 * @y2 The end y of the line.
			 */
            void DrawLine(s16 x1, s16 y1, s16 x2, s16 y2, u16 colour, s8 width);

			/**
			 * Sets the canvas to the background.
			 */
			void Clear();
    };
}

#endif
