#pragma once
#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class Warlock
{
private:
	std::string name;
	std::string title;
	SpellBook book;
public:
	std::string const &getName() const;
	std::string const &getTitle() const;
	void setTitle(std::string const &title);
	void introduce() const;
	void learnSpell(ASpell *spell);
	void forgetSpell(std::string spellName);
	void launchSpell(std::string spellName, ATarget const &target);
	Warlock(std::string const &name, std::string const &title);
	~Warlock();
};
