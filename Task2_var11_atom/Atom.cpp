#include "Atom.h"

Atom::Atom(string name, int nCount, int pCount, int eCount)
{
	this->name = name;
	for (int i = 0; i < nCount; i++)
		neutronList.push_back(new Neutron());
	for (int i = 0; i < pCount; i++)
		protonList.push_back(new Proton());
	for (int i = 0; i < eCount; i++)
		electronList.push_back(new Electron());
}

Atom::Atom(Atom* atom)
{
	this->name = atom->getName();
	this->neutronList = atom->getNeutrons();
	this->protonList = atom->getProtons();
	this->electronList = atom->getElectrons();
}

vector<Neutron*> Atom::getNeutrons()
{
	return neutronList;
}

vector<Proton*> Atom::getProtons()
{
	return protonList;
}

vector<Electron*> Atom::getElectrons()
{
	return electronList;
}

string Atom::getName()
{
	return name;
}

Atom::~Atom()
{
	for (Neutron* n : neutronList)
		delete n;
	for (Proton* p : protonList)
		delete p;
	for (Electron* e : electronList)
		delete e;
}