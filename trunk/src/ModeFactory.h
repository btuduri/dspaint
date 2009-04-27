#ifndef MODEFACTORY_H
#define MODEFACTORY_H

#include "AbstractMode.h"
#include "PenMode.h"
#include "EraserMode.h"

namespace DSPaint
{
	class ModeFactory
	{
		private:
			ModeFactory();
			~ModeFactory();
			ModeFactory(ModeFactory const&);
			ModeFactory& operator=(ModeFactory const&);

		public:
			/**
			 * Modes enum.
			 */
			enum Mode
			{
				PEN_MODE,
				ERASER_MODE
			};

			/**
			 * Creates a mode based on mode.
			 * @mode The mode to create.
			 */
			static AbstractMode *GetMode(Mode mode);
	};
}

#endif


