#ifndef MODEMANAGER_H
#define MODEMANAGER_H

#include <vector>

#include "AbstractMode.h"
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
			std::vector<AbstractMode *> modes;

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
			 * Get a list of all modes.
			 */
			std::vector<AbstractMode *> GetModes();

			/**
			 * Get number of modes.
			 */
			int GetNumberOfModes();
	};
}

#endif


