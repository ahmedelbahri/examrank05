#pragma once
#include <iostream>
#include <map>
#include "ASpell.hpp"

class SpellBook
{
private:
	std::map<std::string, ASpell *> spells;
public:
	SpellBook();
	~SpellBook();
	void learnSpell(ASpell *spell);
	void forgetSpell(std::string &spellName);
	ASpell *createSpell(std::string const &spellName);
};