#include <iostream>
using namespace std;
int g(int& x) ;
int f(int& x) ;
void h(int x, int y )
{
    int i = 7 ;
    int& r = i ; // r i s una r e f e r e n c i a a i
    r = 9 ; // i s e c o n v i e r t e en 9
    i = 10;
    cout << r <<   << i <<  \n  ;
    vector <vector<double>> v;

    double val=v[f(x)][g(y)];
    // v[f(x)][g(y)]

    double&var =v[f(x)][g(y)];


    var=var/2+sqrt(var) ;
}

int f (int&x)
{
    x=x+1;
    return x;
}
int main ()
{
    int xx =0;
    cout<< f(xx) << endl; // im p rime : 1
    cout<< xx << endl; // im p rime : 1 ;
    // f ( ) cambia e l v a l o r de xx
    int yy=7;
    cout<< f ( yy ) << e n d l ; // im p rime : 8
    cout<<yy<< endl; // im p rime : 8 ;
    //f() cambia e l v a l o r de yy
}
