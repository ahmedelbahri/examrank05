#include "ASpell.hpp"

std::string const &ASpell::getName() const
{
	return (this->name);
}

std::string const &ASpell::getEffects() const
{
	return (this->effects);
}

void ASpell::launch(ATarget const &target) const
{
	target.getHitBySpell(*this);
}

ASpell::ASpell(std::string const &name, std::string const &effects) : name(name), effects(effects)
{
}

ASpell::~ASpell()
{
}
