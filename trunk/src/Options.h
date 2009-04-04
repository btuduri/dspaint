#ifndef OPTIONS_H
#define OPTIONS_H

#include "AbstractPen.h"

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

		public:
			/**
			 * Creates a new options class.
			 * @file The options file to load from.
			 */
			Options(char *file = "options.ini");

			/**
			 * Saves the options to the file.
			 */
			void Save();

			/**
			 * Gets the current pen.
			 */
			AbstractPen *GetPen();

			/**
			 * Changes the current pen.
			 * @pen The new pen to use. Passing in NULL will not change it.
			 */
			void SetPen(AbstractPen *pen);
	};
}

#endif
