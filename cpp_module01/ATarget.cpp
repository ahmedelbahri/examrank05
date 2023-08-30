#include "ATarget.hpp"

std::string const &ATarget::getType() const
{
	return (this->type);
}

void ATarget::getHitBySpell(ASpell const &spell) const
{
	std::cout << this->type << " has been " << spell.getEffects() << "!" << std::endl;
}

ATarget::ATarget(std::string const &type) : type(type)
{
}

ATarget::~ATarget()
{
}
