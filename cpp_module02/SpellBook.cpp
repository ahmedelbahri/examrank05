#include "SpellBook.hpp"

void SpellBook::learnSpell(ASpell *spell)
{
	spells[spell->getName()] = spell;
}

void SpellBook::forgetSpell(std::string &spellName)
{
	spells.erase(spellName);
}

ASpell *SpellBook::createSpell(std::string const &spellName)
{
	if (spells.find(spellName) == spells.end())
		return (NULL);
	return (spells[spellName]->clone());
}

SpellBook::SpellBook()
{
}

SpellBook::~SpellBook()
{
}