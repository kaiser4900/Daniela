#include <iostream>
#include <vector>
using namespace std;
int main ()
{
int a; // no i n i c i a l i z a d o
double d=7; // i n i c i a l i z a d o u sando =
vector <int> vi(10) ; // i n i c i a l i z a d o u sando ( )
const int x = 7 ; // i n i c i a l i z a d o u sando =
const int x2(9); // i n i c i a l i z a d o u sando ( )
// const int y; //error: no inicializado
}

namespace innocent
{
void f(int z)
{
int x; // s i n i n i c i a l i z a r
x=7; // da un v a l o r a x
}
}
namespace dangerous
{
void f (int z)
{
    int x; // s i n i n i c i a l i z a r
    if (z>x){
    }
    x=7; // da a 7 un v a l o r
}
}
