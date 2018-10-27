#include <iostream>
using namespace std;

int main ()
{
    int x0=area (7,4); // error: funcion no declarada
    int x1=area (7,4); // error: numero de argumentos
    int x2=area (3,2); // error: error en el tipo
    // del primer argumento
    return area(4,4);
}
int area(int length, int width)
{
    return length*width;
}
