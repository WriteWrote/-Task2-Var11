#pragma once
#include "Atom.h"
#include <vector>

using namespace std;

class Molecule
{
private:
	vector<Atom*> atomList;
public:
	Molecule(vector<Atom*> atomNameL,
		vector<int>atomCountL);

	vector<Atom*> getAtoms();
	void setAtoms(vector<Atom*> newAtomL);
	void addAtom(Atom* newAtom);

	~Molecule();
};

