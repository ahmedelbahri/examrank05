#include "Dummy.hpp"

ATarget *Dummy::clone() const
{
	return (new Dummy(*this));
}

Dummy::Dummy() : ATarget("Target Practice Dummy")
{
}

Dummy::~Dummy()
{
}
