#ifndef MODEMANAGER_H
#define MODEMANAGER_H

#include "IOperationalMode.h"
#include "ModeNormal.h"

namespace DSPaint
{
	class ModeManager
	{
	    private:
            int numberOfModes;
            IOperationalMode* currentMode;
            IOperationalMode* allModes[1];

		public:
            /**
			 * Creates a new instance.
			 */
            ModeManager();

            /**
             * Destroy the instance.
             */
            ~ModeManager();

            /**
             * Set the current mode.
             */
            void SetCurrentMode(IOperationalMode* mode);

            /**
             * Get the current mode.
             */
            IOperationalMode* GetCurrentMode();

            /**
             * Get the current mode's name.
             */
            char* GetCurrentModeName();

            /**
             * Get a list of all modes.
             */
            IOperationalMode** GetModeList();

            /**
             * Get number of modes.
             */
            int GetNumberOfModes();
	};
}

#endif


