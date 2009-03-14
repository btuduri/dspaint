#ifndef OPTIONS_H
#define OPTIONS_H

#include "IPen.h"

namespace DSPaint
{
	/**
	 * Class to load/save options.
	 */
	class Options
	{
		private:
			char* optionsFile;
			IPen* pen;

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
			IPen *GetPen();

			/**
			 * Changes the current pen.
			 * @pen The new pen to use. Passing in NULL will not change it.
			 */
			void SetPen(IPen *pen);
	};
}

#endif
