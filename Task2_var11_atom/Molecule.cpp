#include "Molecule.h"
#include <iostream>

Molecule::Molecule(vector<Atom*> atomL,
						vector<int>atomCountL)
{
	if (atomL.size() != atomCountL.size())
//		throw "Sizes of lists do not match";
		cout << "Sizes of lists do not match";

	for (int i = 0; i < atomL.size(); i++)
		for (int j = 0; j < atomCountL[i]; j++)
			this->atomList.push_back(new Atom(atomL[i]));
}

Molecule::~Molecule()
{
	for (Atom* a : atomList)
	{
		delete a;
	}
}

vector<Atom*> Molecule::getAtoms()
{
	return atomList;
}

void Molecule::setAtoms(vector<Atom*> atoms)
{
	this->atomList = atoms;
}

void Molecule::addAtom(Atom* atom)
{
	atomList.push_back(atom);
}