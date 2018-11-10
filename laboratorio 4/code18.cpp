#include<iostream>
using namespace std;
void init(vector<double>& v) // Llamada p o r r e f e r e n c i a
{
    for (int i=0; i<v.size(); ++i) {v[i]=i};
}
void g(int x)
{
    vector <double> vd1 (10); // v e c t o r pequeno
    vector <double> vd2 (1000000); // v e c t o r l a r g o
    vector <double> vd3 (x) ; // v e c t o r de
// tamanho d e s c o n o c i d o

    init (vd1);
    init (vd2);
    init (vd3);
}
int main ()
{
    g(10);
}
