#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{
}

TargetGenerator::~TargetGenerator()
{
}

void TargetGenerator::learnTargetType(ATarget *target)
{
	this->targets[target->getType()] = target;
}

void TargetGenerator::forgetTargetType(std::string const &target)
{
	this->targets.erase(target);
}

ATarget *TargetGenerator::createTarget(std::string const &target)
{
	if (this->targets.find(target) != this->targets.end())
		return (this->targets[target]->clone());
	return (NULL);
}