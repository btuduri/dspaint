#include "ModeManager.h"

namespace DSPaint
{
    /**
	* Creates a new instance.
	*/
    ModeManager::ModeManager()
    {
        this->numberOfModes = 1;
        this->allModes[0] = new ModeNormal();
        this->SetCurrentMode(allModes[0]);
    }

    /**
    * Destroy the instance.
    */
    ModeManager::~ModeManager()
    {
        delete this->allModes;
    }

    /**
    * Set the current mode.
    */
    void ModeManager::SetCurrentMode(IOperationalMode* mode)
    {
        this->currentMode = mode;
    }

    /**
    * Get the current mode.
    */
    IOperationalMode* ModeManager::GetCurrentMode()
    {
        return currentMode;
    }

    /**
    * Get a list of all modes.
    */
    IOperationalMode** ModeManager::GetModeList()
    {
        return this->allModes;
    }
}
