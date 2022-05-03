#pragma once
#include "AbstractParticle.h"

class Neutron : AbstractParticle
{
private:
	const int charge = 0;
	const double weight = 939.565420; //MeV

public:
	Neutron();

	int getCharge() override;
	double getWeight() override;

	~Neutron();
};

