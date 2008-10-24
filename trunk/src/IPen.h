#ifndef IPEN_H
#define IPEN_H

namespace DSPaint
{
	class IPen
	{
		protected:
			int _width;
			int _colour;

		public:
			/**
			 * Gets the width of the pen.
			 */
			virtual int GetWidth() = 0;

			/**
			 * Sets the width of the pen.
			 * @width The width to set.
			 */
			virtual void SetWidth(int width) = 0;

			/**
			 * Gets the colour of the pen.
			 */
			virtual int GetColour() = 0;

			/**
			 * Sets the colour of the pen.
			 * @colour The colour to set.
			 */
			virtual void SetColour(int colour) = 0;
	};
}

#endif
