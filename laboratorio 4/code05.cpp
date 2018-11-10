#include <iostream>
using namespace std;
void f()
{
    //g() ;// error: g () no esta en el scope
}
void g()
{
    f(); // ok : f() esta en el scope
}
void h ()
{// int x = y ; // error: y aun no esta en el scope
    int x = 0 ;
    int y = x ; // ok:x esta en el scope
    g(); // ok: g () esta en el scope
}
int main()
{
    h();
}
