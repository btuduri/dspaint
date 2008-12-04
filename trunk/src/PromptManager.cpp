#include "PromptManager.h"

namespace DSPaint
{
	int PromptManager::ShowModePrompt(std::vector<IOperationalMode *> modes)
	{
		// change this to palib keys
		char* keys[] = {"A","B","X","Y","L","R"};

		PA_OutputSimpleText(1, 0, 0, "Choose your mode");

		int i = 0;
		int pos = 3;

		for (int i = 0; i < modes.size() && i < 6; i++)
		{
        	pos++;

        	PA_OutputSimpleText(1, 1, pos, keys[i]);
        	PA_OutputSimpleText(1, 4, pos, modes.at(i)->GetModeName());


        	pos++;
		}

		//TODO: Use PA_Wait to get keys

		return 0;
	}

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

		//TODO: Use PA_Wait to get keys

		return 0;
	}

	void PromptManager::ShowMode(const char* modeName)
	{
	    PA_BoxText(1, 0, 22, 31, 23, modeName, 100);
	}
}
