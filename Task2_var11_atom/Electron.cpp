#include "Electron.h"
#include "AbstractParticle.h"

Electron::Electron() : AbstractParticle() {}

Electron::~Electron() {}

int Electron::getCharge()
{
	return charge;
}

double Electron::getWeight()
{
	return weight;
}