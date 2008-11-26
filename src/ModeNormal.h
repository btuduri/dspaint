#ifndef MODENORMAL_H
#define MODENORMAL_H

#include "IOperationalMode.h"

namespace DSPaint
{
	class ModeNormal: public IOperationalMode
	{
		public:
            /**
			 * Creates a new instance of Normal Mode.
			 */
            ModeNormal();

            /**
             * Destroy the instance.
             */
            ~ModeNormal();

            /**
			 * Return the name of the mode.
			 */
			virtual char* GetModeName();

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
			 */
			virtual void Select();
	};
}

#endif

