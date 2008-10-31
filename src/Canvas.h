#ifndef CANVAS_H
#define CANVAS_H

#include "Constants.h"
#include "Dimension.h"

namespace DSPaint
{
    class Canvas
    {
        private:
			Dimension dimension;
			u16 backgroundColour;

        public:
			/**
			 * Creates a new canvas. This also sets the screen to the background colour.
			 * @width The width of the canvas.
			 * @height The height of the canvas.
			 * @background The background colour.
			 */
			Canvas(u16 background = PA_RGB(31,31,31));

			/**
			 * Gets the dimensions of this canvas.
			 */
			Dimension GetDimensions();

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
			 * Gets a colour froma pixel.
			 * @x The x position.
			 * @y The y position.
			 * @return The colour at xy.
			 */
			u16 GetPixel(int x, int y);

			/**
			 * Sets a pixel to a colour.
			 * @x The x position.
			 * @y The y position.
			 * @colour The colour.
			 */
			void SetPixel(s16 x, s16 y, u16 colour);

			/**
			 * Draws on the canvas at the position of the stylus.
			 * @colour The colour.
			 */
			void Draw(u16 colour);

			/**
			 * Sets the screen to the background.
			 * This is dependant on whichever screen is currently being set.
			 */
			void Clear();
    };
}

#endif
