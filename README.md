# -Task2-Var11
### VSU study project

Для каждой задачи необходимо реализовать объектную модель. В реализации задач должны присутствовать наследование, агрегация и др. взаимодействия классов.

Общение с пользователем осуществляется через консоль путем вызова наиболее значимых методов классов, позволяющих увидеть основную функциональность задачи.

Для моделирования динамики процессов можно использовать повторяющиеся вызовы пользователем.

**11.	Молекула вещества**

Молекула содержит атомы: нуклоны (протон, нейтрон), электроны. Между атомами существуют связи различных энергий, связь реализуется посредством взаимодействия электронных оболочек атомов.

Реализовать операции: 

1. определение суммарной энергии взаимодействия атомов,
2. определение массы молекулы,
3. определение суммарной массы нуклонов и электронов,
4. определение числа атомов одного типа в молекуле.

***
## Interfaces

### Atom
**Methods:** ...

### Nucleon
**Methods:** ...

***
## Classes

### Molecule
// **Fields:** atoms
- **Fields:** protons, electrons, neutrons
- **Methods:** 
1. определение суммарной энергии взаимодействия атомов,
2. определение массы молекулы,
3. определение суммарной массы нуклонов и электронов,
4. определение числа атомов одного типа в молекуле.

### Electron
- **Fields:** ...
- **Methods:** ...

### Quark
- **Fields:** boolean Up-quark
- **Methods:** ...

### Proton
- **Fields:** quarks
- **Methods:** ...

### Neutron
- **Fields:** quarks
- **Methods:** ...
