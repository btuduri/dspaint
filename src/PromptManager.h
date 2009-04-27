#ifndef PROMPTMANAGER_H
#define PROMPTMANAGER_H

#include <stdarg.h>
#include <vector>

#include <PA9.h>

#include "AbstractMode.h"
#include "DSPaint.h"

namespace DSPaint
{
	class AbstractMode;

	class PromptManager
	{
		private:
			static const char *keys[];
			static const size_t MAX_OPTIONS = 6;
		public:
			/**
			 * Show list of modes.
			 * @modes The vector containing modes to display.
			 * @return The mode selected.
			 */
			static int ShowModePrompt(std::vector<AbstractMode *> modes);

			/**
			 * Shows a message prompt.
			 * @message The message to show.
			 * @... A list of char* of the options to display.
			 * @return The option selected pressed. 0 means cancelled otherwise an index starting from 1.
			 */
			static int ShowMessagePrompt(const char *message, size_t count, ...);

			/**
			 * Chooses a mode. This will set the current mode in the options.
			 */
			static void *ChooseMode();

			/**
			 * Shows a mode.
			 * @mode The mode to use.
			 */
			static void ShowMode(AbstractMode * mode);
	};
}

#endif
