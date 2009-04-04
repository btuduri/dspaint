#include "PenMode.h"

namespace DSPaint
{
	PenMode::PenMode()
	{
	}

	PenMode::~PenMode()
	{
	}

	void PenMode::IncreasePenWidth()
	{
		//u8 old = this->options->GetPen()->GetWidth();
		//this->options->GetPen()->SetWidth(old + 1);
	}

	void PenMode::DecreasePenWidth()
	{
		//u8 old = this->options->GetPen()->GetWidth();
		//this->options->GetPen()->SetWidth(old - 1);
	}

	char* PenMode::GetModeName()
	{
		return "Pen Mode";
	}

	void PenMode::A()
	{
	}

	void PenMode::B()
	{

	}

	void PenMode::X()
	{

	}

	void PenMode::Y()
	{

	}

	void PenMode::Up()
	{
		//IncreasePenWidth();
	}

	void PenMode::Down()
	{
		//DecreasePenWidth();
	}

	void PenMode::Left()
	{
		//DecreasePenWidth();
	}

	void PenMode::Right()
	{
		//IncreasePenWidth();
	}

	void PenMode::Start()
	{

	}

	void PenMode::Select()
	{

	}
}
