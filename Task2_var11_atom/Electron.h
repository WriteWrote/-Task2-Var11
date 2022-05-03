#pragma once
#include "AbstractParticle.h"

class Electron : public AbstractParticle
{
private:
	const int charge = -1;
	const double weight = 0.510998; //MeV
public:
	Electron();

	int getCharge() override;
	double getWeight() override;

	~Electron();
};

