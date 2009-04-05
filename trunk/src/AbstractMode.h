#ifndef ABSTRACTMODE_H
#define ABSTRACTMODE_H

#include "Options.h"

namespace DSPaint
{
	/**
	 * The child classes should implement the button presses as the default does nothing.
	 */
	class AbstractMode
	{
		public:
			/**
			 * Creates a new mode.
			 */
			AbstractMode();

			/**
			 * Destroys this mode.
			 */
			virtual ~AbstractMode();

            /**
			 * Return the name of the mode.
			 */
			virtual char *GetName();

			/**
			 * Method to execute on A press.
			 */
			virtual void A();

            /**
			 * Method to execute on B press.
			 */
			virtual void B();

            /**
			 * Method to execute on X press.
			 */
			virtual void X();

			/**
			 * Method to execute on Y press.
			 */
			virtual void Y();

			/**
			 * Method to execute on +up press.
			 */
			virtual void Up();

			/**
			 * Method to execute on +down press.
			 */
			virtual void Down();

			/**
			 * Method to execute on +left press.
			 */
			virtual void Left();

			/**
			 * Method to execute on +right press.
			 */
			virtual void Right();

			/**
			 * Method to execute on start press.
			 */
			virtual void Start();

			/**
			 * Method to execute on select press.
			 * This should ideally be a help screen.
			 */
			virtual void Select();
	};
}

#endif
