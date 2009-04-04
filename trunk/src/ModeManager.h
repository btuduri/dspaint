#ifndef MODEMANAGER_H
#define MODEMANAGER_H

#include <vector>

#include "IOperationalMode.h"
#include "PenMode.h"
#include "EraserMode.h"

namespace DSPaint
{
	class ModeManager
	{
		public:
			/**
			 * Modes enum.
			 */
			enum Mode
			{
				pen_mode,
				eraser_mode
			};

		private:
			IOperationalMode *currentMode;
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
			void SetCurrentMode(Mode mode);

			/**
			 * Get the current mode.
			 */
			IOperationalMode *GetCurrentMode();

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


