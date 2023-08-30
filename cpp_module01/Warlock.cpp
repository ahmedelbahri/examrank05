#include "Warlock.hpp"


std::string const &Warlock::getName() const
{
	return (this->name);
}

std::string const &Warlock::getTitle() const
{
	return (this->title);
}

void Warlock::setTitle(std::string const &title)
{
	this->title = title;
}

void Warlock::introduce() const
{
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!\n";
}

void Warlock::learnSpell(ASpell *spell)
{
	this->book[spell->getName()] = spell;
}

void Warlock::forgetSpell(std::string spellName)
{
	this->book.erase(spellName);
}

void Warlock::launchSpell(std::string spellName, ATarget const &target)
{
	std::map<std::string, ASpell *>::iterator it = this->book.find(spellName);
	if (it != this->book.end())
		it->second->launch(target);
}

Warlock::Warlock(std::string const &name, std::string const &title) : name(name), title(title)
{
	std::cout << this->name << ": This looks like another boring day.\n";
}

Warlock::~Warlock()
{
	std::cout << this->name << ": My job here is done!\n";
}
