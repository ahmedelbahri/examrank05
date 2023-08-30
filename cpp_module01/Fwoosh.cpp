#include "Fwoosh.hpp"

ASpell *Fwoosh::clone() const
{
	return (new Fwoosh(*this));
}

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed")
{
}

Fwoosh::~Fwoosh()
{
}
