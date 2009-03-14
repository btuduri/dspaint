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
    void ModeManager::SetCurrentMode(Mode mode)
    {
        currentMode = this->modes.at(mode);
    }

	/**
     * Get the current mode.
     */
    IOperationalMode *ModeManager::GetCurrentMode()
    {
        return this->currentMode;
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
