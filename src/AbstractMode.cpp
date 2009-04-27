#include "AbstractMode.h"

namespace DSPaint
{
	void AbstractMode::ChooseMode()
	{
		int res = DSPaint::PromptManager::ShowMessagePrompt(
				"Choose an option",
				2,
				"New image",
				"Change mode"
			);

			switch (res)
			{
				case 1:
					res = DSPaint::PromptManager::ShowMessagePrompt(
							"Are you sure you want to clear the image?",
							2,
							"Yes",
							"No"
						);

					if (res == 1)
					{
						Options::Instance().GetCanvas()->Clear();
					}
					break;

				case 2:
					//res = DSPaint::PromptManager::ShowModePrompt(mm.GetModes());

					//if (res == 1)
					//{
					//	options.SetCurrentMode(new DSPaint::PenMode());
					//	DSPaint::PromptManager::ShowMode(options.GetCurrentMode());
					//}
					//else if (res == 2)
					//{
					//	options.SetCurrentMode(new DSPaint::EraserMode());
					//	DSPaint::PromptManager::ShowMode(options.GetCurrentMode());
					//}
					break;

					//DSPaint::AbstractMode *mode;
					//mode = DSPaint::PromptManager::ChooseMode();
					//options.SetCurrentMode(mode);
			}
	}

	AbstractMode::AbstractMode()
	{
	}

	AbstractMode::~AbstractMode()
	{
	}

	const char *AbstractMode::GetName()
	{
		return "AbstractMode";
	}

	void AbstractMode::A()
	{
	}

	void AbstractMode::B()
	{
	}

	void AbstractMode::X()
	{
	}

	void AbstractMode::Y()
	{
	}

	void AbstractMode::L()
	{
		ChooseMode();
	}

	void AbstractMode::R()
	{
		ChooseMode();
	}

	void AbstractMode::Up()
	{
	}

	void AbstractMode::Down()
	{
	}

	void AbstractMode::Left()
	{
	}

	void AbstractMode::Right()
	{
	}

	void AbstractMode::Start()
	{
	}

	void AbstractMode::Select()
	{
	}
}
