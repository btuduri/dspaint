#include "ModeManager.h"

namespace DSPaint
{
	ModeManager::ModeManager()
	{
		this->modes.push_back(new PenMode());
		this->modes.push_back(new EraserMode());
	}

	ModeManager::~ModeManager()
	{
		this->modes.clear();
	}

	std::vector<AbstractMode *> ModeManager::GetModes()
	{
		return this->modes;
	}

	int ModeManager::GetNumberOfModes()
	{
		return this->modes.size();
	}
}
