#pragma once
#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Fwoosh : public ASpell
{
public:
	Fwoosh();
	virtual ~Fwoosh();
	virtual ASpell *clone() const;
};