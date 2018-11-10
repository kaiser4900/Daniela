#include <iostream>
using namespace std;
typedef int T;
typedef double V;
T f() // f() r e t o r n a un T
{
    V v;
// . . .
    return v;
}
// Codigo con bugs
double my_abs (int x)
{
    if (x<0)
        return −x;
    else if (x>0)
        return x ;
} // s i x e s c e r o no r e t o r n a nada
void print_until(const vector<string> v,const string quit)
{
    for (int i=0; i<v.size(); ++i){
        if (v[i]==quit) return;
        cout<<v[i]<< \n ;
    }
}
