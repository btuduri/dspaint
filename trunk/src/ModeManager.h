#ifndef MODEMANAGER_H
#define MODEMANAGER_H

#include <vector>

#include "IOperationalMode.h"
#include "PenMode.h"
#include "EraserMode.h"

//using namespace std:

namespace DSPaint
{
	class ModeManager
	{
	    private:
            int currentMode;
            std::vector<IOperationalMode *> modes;

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
            void SetCurrentMode(int mode);

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
            std::vector<IOperationalMode *> GetModes();

            /**
             * Get number of modes.
             */
            int GetNumberOfModes();
	};
}

#endif


