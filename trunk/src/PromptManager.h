#ifndef PROMPTMANAGER_H
#define PROMPTMANAGER_H

#include <stdarg.h>

#include <PA9.h>

namespace DSPaint
{
	class PromptManager
	{
		private:
			static bool isInitialised;
		public:
			static int ShowMessagePrompt(const char* message, ...);
	};
}

#endif
