#ifndef IOPERATIONALMODE_H
#define IOPERATIONALMODE_H

#include "Canvas.h"

namespace DSPaint
{
	class IOperationalMode
	{
		public:
			/**
			 * Method to execute on A press.
			 */
			virtual void A() = 0;

            /**
			 * Method to execute on B press.
			 */
			virtual void B() = 0;

            /**
			 * Method to execute on X press.
			 */
			virtual void X() = 0;

			/**
			 * Method to execute on Y press.
			 */
			virtual void Y() = 0;

			/**
			 * Method to execute on +up press.
			 */
			virtual void Up() = 0;

			/**
			 * Method to execute on +down press.
			 */
			virtual void Down() = 0;

			/**
			 * Method to execute on +left press.
			 */
			virtual void Left() = 0;

			/**
			 * Method to execute on +right press.
			 */
			virtual void Right() = 0;

			/**
			 * Method to execute on start press.
			 */
			virtual void Start() = 0;

			/**
			 * Method to execute on select press.
			 */
			virtual void Select() = 0;
	};
}

#endif
