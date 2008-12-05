#include "PromptManager.h"

namespace DSPaint
{
	const char* PromptManager::keys[] = {"A","B","X","Y","L","R"};

	int PromptManager::ShowModePrompt(std::vector<IOperationalMode *> modes)
	{
		PA_OutputSimpleText(1, 0, 0, "Choose your mode");

		//int i = 0;
		int pos = 3;

		for (size_t i = 0; i < modes.size() && i < PromptManager::MAX_OPTIONS; i++)
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
		PA_OutputSimpleText(1, 0, 0, message);

		char* c;
		size_t i = 0;
		int pos = 3;

		va_list buttons;

		va_start(buttons, message);

		while ((c = va_arg(buttons, char*)) != NULL && i < PromptManager::MAX_OPTIONS)
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

	void PromptManager::ShowMode(IOperationalMode* modeName)
	{
	    PA_BoxText(1, 0, 22, 31, 23, modeName->GetModeName(), 100);
	}
}
