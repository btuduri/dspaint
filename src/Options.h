#ifndef OPTIONS_H
#define OPTIONS_H

#include "AbstractMode.h"
#include "AbstractPen.h"
#include "Canvas.h"

namespace DSPaint
{
	/**
	 * Class to load/save options.
	 */
	class Options
	{
		private:
			char* optionsFile;
			AbstractPen* pen;
			AbstractMode* mode;
			Canvas* canvas;
			Options();
			~Options();
			Options(Options const&);
			Options& operator=(Options const&);

		public:
			/**
			 * Gets an instance of the options.
			 */
			static Options& Instance()
			{
				static Options options;
				return options;
			}

			/**
			 * Saves the options to the file.
			 */
			void Save();

			/**
			 * Gets the current canvas.
			 */
			Canvas *GetCanvas();

			/**
			 * Sets the canvas.
			 * @canvas The new canvas. Passing in NULL will not change it.
			 */
			void SetCanvas(Canvas *canvas);

			/**
			 * Gets the current pen.
			 */
			AbstractPen *GetPen();

			/**
			 * Changes the current pen.
			 * @pen The new pen to use. Passing in NULL will not change it.
			 */
			void SetPen(AbstractPen *pen);

			/**
			 * Gets the current mode.
			 */
			AbstractMode *GetCurrentMode();

			/**
			 * Sets the current mode.
			 */
			void SetCurrentMode(AbstractMode *mode);
	};
}

#endif
