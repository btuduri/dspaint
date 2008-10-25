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
			int backgroundColour;

        public:
			/**
			 * Creates a new canvas. This also sets the screen to the background colour.
			 * @width The width of the canvas.
			 * @height The height of the canvas.
			 * @background The background colour.
			 */
			Canvas(int width = NDS_SCREEN_MAX_WIDTH, int height = NDS_SCREEN_MAX_HEIGHT, int background = RGB15(31, 31, 31));

			/**
			 * Gets the dimensions of this canvas.
			 */
			DIMENSION GetDimensions();

			/**
			 * Gets the background colour of this canvas.
			 */
			int GetBackgroundColour();

			/**
			 * Sets the background colour of this canvas.
			 * @backgroundColour The background colour of this canvas.
			 */
			void SetBackgroundColour(int backgroundColour);

			/**
			 * Sets the screen to the background.
			 * This is dependant on whichever screen is currently being set.
			 */
			void Clear();
    };
}

#endif
