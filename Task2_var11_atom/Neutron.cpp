#include "Neutron.h"
#include "AbstractParticle.h"

Neutron::Neutron() : AbstractParticle() {}

Neutron::~Neutron() {}

int Neutron::getCharge()
{
	return charge;
}

double Neutron::getWeight()
{
	return weight;
}