#include "PenMode.h"

namespace DSPaint
{
    /**
	* Creates a new instance of Normal Mode.
	*/
    PenMode::PenMode()
    {
        this->modeName = "Pen Mode";
    }

    /**
    * Destroy the instance.
    */
    PenMode::~PenMode()
    {

    }

    /**
	 * Return the name of the mode.
	 */
	char* PenMode::GetModeName()
	{
	    return this->modeName;
	}

    /**
	* Method to execute on A press.
	*/
	void PenMode::A()
    {

    }

    /**
	* Method to execute on B press.
	*/
	void PenMode::B()
    {

    }

    /**
	* Method to execute on X press.
	*/
	void PenMode::X()
    {

    }

	/**
	* Method to execute on Y press.
	*/
	void PenMode::Y()
    {

    }

	/**
	* Method to execute on +up press.
	*/
	void PenMode::Up()
    {

    }

	/**
	* Method to execute on +down press.
	*/
	void PenMode::Down()
    {

    }

	/**
    * Method to execute on +left press.
	*/
	void PenMode::Left()
    {

    }

	/**
	* Method to execute on +right press.
	*/
	void PenMode::Right()
    {

    }

	/**
	* Method to execute on start press.
	*/
	void PenMode::Start()
    {

    }

	/**
	* Method to execute on select press.
	*/
	void PenMode::Select()
    {

    }
}
