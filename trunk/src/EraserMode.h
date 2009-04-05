#ifndef ERASERMODE_H
#define ERASERMODE_H

#include "AbstractMode.h"
#include "Options.h"

namespace DSPaint
{
	class EraserMode: public AbstractMode
	{
		public:
			/**
			 * Creates a new instance of Normal Mode.
			 */
			EraserMode();

			/**
			 * Destroy the instance.
			 */
			~EraserMode();

			/**
			 * Return the name of the mode.
			 */
			char* GetModeName();

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
