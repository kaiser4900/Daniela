#include <iostream>
#include "f.h"
using namespace std;

// Copia las declaraciones de f.h en este archivo
int g(int i)
{
    return f(i);
}

int main ()
{
    return g(0);
}

int f (int n)
{
    return n;
}

