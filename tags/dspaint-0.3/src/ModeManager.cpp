#include "ModeManager.h"

namespace DSPaint
{
    /**
     * Creates a new instance.
	 */
    ModeManager::ModeManager()
    {
        this->modes.push_back(new PenMode());
        this->modes.push_back(new EraserMode());

        this->SetCurrentMode(0);
    }

    /**
     * Destroy the instance.
     */
    ModeManager::~ModeManager()
    {
        this->modes.clear();
    }

    /**
     * Set the current mode.
     */
    void ModeManager::SetCurrentMode(int mode)
    {
        this->currentMode = mode;
    }

	/**
     * Get the current mode.
     */
    IOperationalMode* ModeManager::GetCurrentMode()
    {
        return this->modes.at(this->currentMode);
    }

	/**
     * Get a list of all modes.
     */
    std::vector<IOperationalMode *> ModeManager::GetModes()
    {
    	return this->modes;
    }

    /**
     * Get number of modes.
     */
    int ModeManager::GetNumberOfModes()
    {
        return this->modes.size();
    }
}
