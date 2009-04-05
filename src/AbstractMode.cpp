#include "AbstractMode.h"

namespace DSPaint
{
	AbstractMode::AbstractMode()
	{
	}

	AbstractMode::~AbstractMode()
	{
	}

	char *AbstractMode::GetName()
	{
		return "AbstractMode";
	}

	void AbstractMode::SetOptions(Options *options)
	{
		this->options = options;
	}

	void AbstractMode::A()
	{
	}

	void AbstractMode::B()
	{
	}

	void AbstractMode::X()
	{
	}

	void AbstractMode::Y()
	{
	}

	void AbstractMode::Up()
	{
	}

	void AbstractMode::Down()
	{
	}

	void AbstractMode::Left()
	{
	}

	void AbstractMode::Right()
	{
	}

	void AbstractMode::Start()
	{
	}

	void AbstractMode::Select()
	{
	}
}
