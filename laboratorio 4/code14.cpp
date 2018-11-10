#include <iostream>
using namespace std;
void f(int a, int& r, const int&cr)
{
    ++a ;
    ++r ;
//++cr ;
}
void g(int a, int& r,const int&cr)
{
    ++a ;
    ++r ;
    int x = cr ;
}
int main ()
{
    int x = 0 ;
    int y = 0 ;
    int z = 0 ;
    g (x,y,z) ; // x==0; y==1; z==0
//g (1,2,3) ;
    g (1,y,3) ; // ok : como cr es const,
// podemos pasarle un valor literal
}
