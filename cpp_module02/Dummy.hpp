#pragma once
#include <iostream>
#include "ATarget.hpp"

class Dummy : public ATarget
{
public:
	Dummy();
	virtual ~Dummy();
	virtual ATarget *clone() const;
};
