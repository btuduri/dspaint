#include "PromptManager.h"

namespace DSPaint
{
	int PromptManager::ShowMessagePrompt(const char* message, ...)
	{
		// change this to palib keys
		char* keys[] = {"A","B","X","Y","L","R"};

		PA_OutputSimpleText(1, 0, 0, message);

		char* c;
		int i = 0;
		int pos = 3;

		va_list buttons;

		va_start(buttons, message);

		while ((c = va_arg(buttons, char*)) != NULL && i < 6)
        {
        	pos++;

        	PA_OutputSimpleText(1, 1, pos, keys[i]);
        	PA_OutputSimpleText(1, 4, pos, c);


        	pos++;
        	i++;
        }

		va_end(buttons);

		return 0;
	}
}
