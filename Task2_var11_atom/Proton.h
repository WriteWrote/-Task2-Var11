#pragma once
#include "AbstractParticle.h"

class Proton : AbstractParticle
{
private:
	const int charge = 1;
	const double weight = 938.272088; //MeV

public:
	Proton();

	int getCharge() override;
	double getWeight() override;

	~Proton();
};

