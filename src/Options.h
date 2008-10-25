#include "Mode.h"

namespace DSPaint
{
	/**
	 * Class to load/save options.
	 */
	class Options
	{
		private:
			char* optionsFile;

		public:
			/**
			 * Creates a new options class.
			 * @file The options file to load from.
			 */
			Options(char* file = "options.ini");

			/**
			 * Gets the current mode.
			 */
			Mode GetMode();

			/**
			 * Sets the current mode.
			 * @mode The mode to use.
			 */
			void SetMode(Mode mode);

			/**
			 * Saves the options to the file.
			 */
			void Save();
	};
}
