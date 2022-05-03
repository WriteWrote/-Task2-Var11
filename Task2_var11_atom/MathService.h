#pragma once
#include "Molecule.h"
#include <iostream>

#define MEV_TO_KG_MULTIPLIER 1.783;

class MathService
{
public:
	static double getMoleculeMassInMeV(Molecule* m) {
		double mass = 0.0;
		for (Atom* a : m->getAtoms())
			mass += getAtomMass(a);
		return mass;
	}
	
	static string getMoleculeMassInKg(Molecule* m) {
		return kgToString(mevToKg(getMoleculeMassInMeV(m)));
	}

	static double getMoleculeEnergy(Molecule* m) {
		// also ?????????????????????????
		double energy = 0.0;
		for (Atom* a : m->getAtoms())
		{
			energy += getAtomEnergy(a);
		}
		return energy;
	}

	static double getParticlesMass(Molecule* m) {
		double mass = 0.0;
		for (Atom* a : m->getAtoms())
		{
			for (Proton* p : a->getProtons())
				mass += p->getWeight();
			for (Neutron* n : a->getNeutrons())
				mass += n->getWeight();
			for (Electron* n : a->getElectrons())
				mass += n->getWeight();
		}
		return mass;
	}

	static int getAtomTypeCounts(Molecule* m, string name) {
		int count = 0;
		for (Atom* a : m->getAtoms())
			if (a->getName() == name)
				count++;
		return count;
	}

	static double getAtomEnergy(Atom* a) {
		double energy = 0.0;
		// ?????????????
		energy += a->getElectrons().size();
		energy += a->getProtons().size();
		energy += a->getNeutrons().size();
		
		return energy;
	}
	static double getAtomMass(Atom* a) {
		double mass = 0.0;

		for (Electron* e : a->getElectrons())
			mass += e->getWeight();
		for (Proton* p : a->getProtons())
			mass += p->getWeight();
		for (Neutron* n : a->getNeutrons())
			mass += n->getWeight();
		
		return mass;
	}

	static pair<double, int> mevToKg(double mev) {
		double kg = mev * MEV_TO_KG_MULTIPLIER;
		int power = -30;
		pair<double, int> p;
		
		p.first = kg;
		p.second = power;

		return p;
	}

	static string kgToString(pair<double, int> p) {
		string res = "";
		
		res += to_string(p.first);
		res += "*10^";
		res += to_string(p.second);
		res += " kg";
		
		return res;
	}

	static string atomToString(Atom* a) {
		string str = "";
		str += "  Atom: " + a->getName() + "\n";
		str += "	Neutrons: " + to_string(a->getNeutrons().size()) + "\n";
		str += "	Protons: " + to_string(a->getProtons().size()) + "\n";
		str += "	Electrong: " + to_string(a->getElectrons().size()) + "\n";
		return str;
	}

	static string moleculeToString(Molecule* m) {
		if (m == nullptr)
			//throw "Molecule is null";
			cout << "Molecule is null";
		
		string str = "";
		str += "Molecule: \n";
		
		for (Atom* a : m->getAtoms())
			str += atomToString(a);
		str += "End of molecule\n";
		
		return str;
	}
};

