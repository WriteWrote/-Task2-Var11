#pragma once
#include <vector>
#include <string>
#include "Neutron.h"
#include "Proton.h"
#include "Electron.h"

using namespace std;

class Atom
{
private:
	string name = "";
	vector <Neutron*> neutronList;
	vector <Proton*> protonList;
	vector <Electron*> electronList;

public:
	Atom(string name, int nCount, int pCount, int eCount);
	Atom(Atom* atom);

	string getName();
	vector<Neutron*> getNeutrons();
	vector <Proton*> getProtons();
	vector <Electron*> getElectrons();

	~Atom();
};

