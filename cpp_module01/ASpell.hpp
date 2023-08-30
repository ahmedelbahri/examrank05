#pragma once
#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
private:
	std::string name;
	std::string effects;
public:
	std::string const &getName() const;
	std::string const &getEffects() const;
	virtual ASpell *clone() const = 0;
	void launch(ATarget const &target) const;
	ASpell(std::string const &name, std::string const &effects);
	virtual ~ASpell();
};