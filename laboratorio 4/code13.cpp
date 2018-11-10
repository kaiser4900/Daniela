#include <iostream>
using namespace std;
void swap (double&d1,double& d2)
{
    double temp = d1 ; // c o p i a e l v a l o r de d1 en temp
    d1=d2 ; // c o p i a e l v a l o r de d2 en d1
    d2=temp ; // c o p i a e l v a l o r de temp en d2
}
int main ()
{
    double x = 1 ;
    double y = 2 ;
    cout << x ==  << x <<  y==  << y <<  \n  ;
    // im p rime : x==1 y==2
    swap (x,y);
    cout << x ==  << x <<  y==  << y <<  \n  ;
// im p rime : x==2 y==1
}
