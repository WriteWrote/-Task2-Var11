#include <iostream>
#include <vector>
#include "MathService.h"

// vec <type>& - link to avoid cloning and emptying ONLY objects,
// cause links will be available
void clearVectorTypeAtom(vector<Atom*>& vec)
{
    /*vector<Atom*>::iterator iter_begin;
    vector<Atom*>::iterator iter_end;
   
    iter_begin = vec.begin();
    iter_end = vec.end();*/
    
    for (auto i=vec.begin(); i != vec.end(); i++)
    {
        delete* i;
    }

    /*while (vec.size() > 1)
    {
        --iter_end;
        delete* iter_end;
        //iter = vec.erase(iter);
    }*/

    vec.clear();
}

void printMenu() {
    cout << "\n***";
    cout << "Options: \n\n";
    cout << "1 - Create molecule \n";
    cout << "2 - Get molecule energy \n";
    cout << "3 - Get molecule mass \n";
    cout << "4 - Get summ nuclons and electrons mass \n";
    cout << "5 - Get count of atom of concrete type in molecule \n";
    cout << "9 - Print molecule \n";
    cout << "0 - Exit \n\n";
    cout << "User input: ";
}

//Neutron n = new Neutron();  -> java
//Neutron* n = new Neutron(); -> c++
int main() {
    Molecule* currentMolecule = nullptr;
    vector<Atom*> atomList;
    vector<int> atomCount;
    string name = "";

    int neutronCount, protonCount, electronCount, countAll;

    int currOption;
    
    do
    {
        printMenu();
        cin >> currOption;

        switch (currOption)
        {
        case 1: {
            cout << "Input atom: name neutrons_count protons_count electrons_count number_of_such_atoms\n";
            cout << "Input -1 at the end\n";

            //atomList.clear();
            /*Atom a = new Atom("A", 1, 1, 1);
            Atom b = new Atom("B", 2, 2, 2);*/
            /*atomList.push_back(&a);
            atomList.push_back(&b);*/

            while (true)
            {
                cin >> name;

                if (name == "-1")
                    break;

                cin >> neutronCount >> protonCount >> electronCount >> countAll;

                atomList.push_back(new Atom(name, neutronCount, protonCount, electronCount));
                atomCount.push_back(countAll);
            }
            currentMolecule = new Molecule(atomList, atomCount);

            clearVectorTypeAtom(atomList);
            atomCount.clear();
        }
            break;
        case 2: {
            cout << "Get molecule energy: " << MathService::getMoleculeEnergy(currentMolecule) << "\n";
        }
            break;
        case 3: {
            cout << "Get molecule mass: " << MathService::getMoleculeMassInKg(currentMolecule) << "\n";
        }
            break;
        case 4: {
            cout << "Get summ nuclons and electrons mass: " << MathService::kgToString(MathService::mevToKg(MathService::getParticlesMass(currentMolecule))) << "\n";
        }
            break;
        case 5: {
            cout << "Enter name of atom: ";
            cin >> name;
            cout << name << " atoms count: " << MathService::getAtomTypeCounts(currentMolecule, name) << "\n";
        }
            break;
        case 9: {
            cout << MathService::moleculeToString(currentMolecule);
        }
            break;
        case 0:
            break;
        }
    } while (currOption != 0);

	return 0;
}