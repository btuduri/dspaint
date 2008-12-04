#ifndef PROMPTMANAGER_H
#define PROMPTMANAGER_H

#include <stdarg.h>
#include <vector>

#include <PA9.h>

#include "IOperationalMode.h"

namespace DSPaint
{
	class PromptManager
	{
		public:
			static int ShowModePrompt(std::vector<IOperationalMode *> modes);
			static int ShowMessagePrompt(const char* message, ...);
			static void ShowMode(const char* modeName);
	};
}

#endif
