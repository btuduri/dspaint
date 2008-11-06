#ifndef CANVAS_H
#define CANVAS_H

#include "Constants.h"
#include "Dimension.h"

namespace DSPaint
{
    class Canvas
    {
        private:
			DIMENSION dimension;
			u16 backgroundColour;

        public:
			/**
			 * Creates a new canvas. This also sets the screen to the background colour.
			 * @backgroundColour The background colour.
			 */
			Canvas(u16 backgroundColour = PA_RGB(31,31,31));

			/**
			 * Gets the dimensions of this canvas.
			 */
			DIMENSION GetDimensions();

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
			 * @pen The pen to use.
			 */
			void SetPixel(s16 x, s16 y, u16 colour);

			/**
			 * Sets the canvas to the background.
			 */
			void Clear();
    };
}

#endif
