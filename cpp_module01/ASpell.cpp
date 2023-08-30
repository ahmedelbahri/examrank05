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

// ASpell &ASpell::operator=(ASpell const &other)
// {
// 	this->name = other.name;
// 	this->effects = other.effects;
// 	return (*this);
// }

ASpell::ASpell(std::string const &name, std::string const &effects) : name(name), effects(effects)
{
}

// ASpell::ASpell(ASpell const &other) : name(other.name), effects(other.effects)
// {
// }

ASpell::~ASpell()
{
}
