#ifndef ANIMALS_H
#define ANIMALS_H
#include <string>
#include <iostream>
using namespace std;
class animals
{
    string name;
    int npatas;
    public:
        animals(string name,int n_patas);
        string getNombre();
        int getPa();
};
#endif // ANIMALS_H
