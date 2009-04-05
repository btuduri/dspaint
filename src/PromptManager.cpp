#include "PromptManager.h"

namespace DSPaint
{
	const char *PromptManager::keys[] = {"A","B","X","Y","St","Sl"};

	int PromptManager::ShowModePrompt(std::vector<AbstractMode *> modes)
	{
		int pos = 4;
		size_t i = 0;

		PA_OutputSimpleText(1, 0, 0, "Choose your mode");

		while ((i < modes.size()) && (i < PromptManager::MAX_OPTIONS))
		{
			PA_OutputSimpleText(1, 1, pos, keys[i]);
			PA_OutputSimpleText(1, 4, pos, modes.at(i)->GetModeName());

			pos+=2; // Two new lines for spacing.
			i++;
		}

		//TODO: Use PA_Wait to get keys
		bool running = true;

		// 0 means nothing selected
		int ret = 0;

		do {
			PA_WaitForVBL();

			// close the menu
			if (Pad.Released.L || Pad.Released.R)
			{
				running = false;
			}
			else if (Pad.Released.A)
			{
				ret = 1;
				running = false;
			}
			else if (Pad.Released.B)
			{
				ret = 2;
				running = false;
			}
			else if (Pad.Released.X)
			{
				ret = 3;
				running = false;
			}
			else if (Pad.Released.Y)
			{
				ret = 4;
				running = false;
			}
			else if (Pad.Released.Start)
			{
				ret = 5;
				running = false;
			}
			else if (Pad.Released.Select)
			{
				ret = 6;
				running = false;
			}
//			else if (Pad.Released.Up)
//			{
//			}
//			else if (Pad.Released.Down)
//			{
//			}
//			else if (Pad.Released.Left)
//			{
//			}
//			else if (Pad.Released.Right)
//			{
//			}
		} while (running);

		PA_ClearTextBg(TOP_SCREEN);

		return ret;
	}

	int PromptManager::ShowMessagePrompt(const char *message, size_t count, ...)
	{
		size_t i = 0;
		int pos = 4;

		PA_OutputSimpleText(1, 0, 0, message);

		va_list buttons;
		va_start(buttons, count);

		while ((i < count) && (i < PromptManager::MAX_OPTIONS))
		{
			PA_OutputSimpleText(1, 1, pos, keys[i]);
			PA_OutputSimpleText(1, 4, pos, va_arg(buttons, const char *));

			pos+=2; // Two new lines for spacing.
			i++;
		}

		va_end(buttons);

		//TODO: Use PA_Wait to get keys
		bool running = true;

		// 0 means nothing selected
		int ret = 0;

		do {
			PA_WaitForVBL();

			// close the menu
			if (Pad.Released.L || Pad.Released.R)
			{
				running = false;
			}
			else if (Pad.Released.A)
			{
				ret = 1;
				running = false;
			}
			else if (Pad.Released.B)
			{
				ret = 2;
				running = false;
			}
			else if (Pad.Released.X)
			{
				ret = 3;
				running = false;
			}
			else if (Pad.Released.Y)
			{
				ret = 4;
				running = false;
			}
			else if (Pad.Released.Start)
			{
				ret = 5;
				running = false;
			}
			else if (Pad.Released.Select)
			{
				ret = 6;
				running = false;
			}
//			else if (Pad.Released.Up)
//			{
//			}
//			else if (Pad.Released.Down)
//			{
//			}
//			else if (Pad.Released.Left)
//			{
//			}
//			else if (Pad.Released.Right)
//			{
//			}
		} while (running);

		PA_ClearTextBg(TOP_SCREEN);

		return ret;
	}

	void PromptManager::ShowMode(AbstractMode *mode)
	{
	    PA_BoxText(1, 0, 22, 31, 23, mode->GetModeName(), 100);
	}
}
