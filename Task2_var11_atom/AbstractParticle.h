#pragma once
using namespace std;

class AbstractParticle
{
protected:
	const int charge = 0;
	const double weight = 0;
public:
	AbstractParticle(){}
	virtual int getCharge() = 0;
	virtual double getWeight() = 0;
	~AbstractParticle(){}
};

