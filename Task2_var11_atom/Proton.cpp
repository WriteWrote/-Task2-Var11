#include "Proton.h"
#include "AbstractParticle.h"

Proton::Proton() : AbstractParticle() {}

Proton::~Proton() {}

int Proton::getCharge()
{
	return charge;
}

double Proton::getWeight()
{
	return weight;
}

