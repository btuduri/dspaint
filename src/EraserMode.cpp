#include "EraserMode.h"

namespace DSPaint
{
    /**
	* Creates a new instance of eraser mode.
	*/
    EraserMode::EraserMode()
    {
        this->modeName = "Eraser Mode";
    }

    /**
    * Destroy the instance.
    */
    EraserMode::~EraserMode()
    {

    }

    void EraserMode::SetOptions(DSPaint::Options* options)
    {
    	if (options != NULL)
			this->options = options;
    }

    /**
	 * Return the name of the mode.
	 */
	char* EraserMode::GetModeName()
	{
	    return this->modeName;
	}

    /**
	* Method to execute on A press.
	*/
	void EraserMode::A()
    {

    }

    /**
	* Method to execute on B press.
	*/
	void EraserMode::B()
    {

    }

    /**
	* Method to execute on X press.
	*/
	void EraserMode::X()
    {

    }

	/**
	* Method to execute on Y press.
	*/
	void EraserMode::Y()
    {

    }

	/**
	* Method to execute on +up press.
	*/
	void EraserMode::Up()
    {

    }

	/**
	* Method to execute on +down press.
	*/
	void EraserMode::Down()
    {

    }

	/**
    * Method to execute on +left press.
	*/
	void EraserMode::Left()
    {

    }

	/**
	* Method to execute on +right press.
	*/
	void EraserMode::Right()
    {

    }

	/**
	* Method to execute on start press.
	*/
	void EraserMode::Start()
    {

    }

	/**
	* Method to execute on select press.
	*/
	void EraserMode::Select()
    {

    }
}
