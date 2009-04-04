#include "IOperationalMode.h"

namespace DSPaint
{
	IOperationalMode::IOperationalMode()
	{
	}

	IOperationalMode::~IOperationalMode()
	{
	}

	char *IOperationalMode::GetModeName()
	{
		return "IOperationalMode";
	}

	void IOperationalMode::SetOptions(Options *options)
	{
		this->options = options;
	}

	void IOperationalMode::A()
	{
	}

	void IOperationalMode::B()
	{
	}

	void IOperationalMode::X()
	{
	}

	void IOperationalMode::Y()
	{
	}

	void IOperationalMode::Up()
	{
	}

	void IOperationalMode::Down()
	{
	}

	void IOperationalMode::Left()
	{
	}

	void IOperationalMode::Right()
	{
	}

	void IOperationalMode::Start()
	{
	}

	void IOperationalMode::Select()
	{
	}
}
