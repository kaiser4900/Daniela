#include <iostream>
using namespace std;
//Da a l a f u n c i o n una c o p i a d e l v a l o r pa sa d o
int f (int x)
{
    x=x+1; // da a l a v a r i a b l e l o c a l x un nuevo v a l o r
    return x ;
}
int main ()
{
    int xx = 0 ;
    cout<< f(xx)<< endl; // im p rime : 1
    cout << xx << endl; // im p rime : 0 ; f ( ) no cambia xx
    int yy = 7 ;
    cout << f(yy)<<endl;// im p rime : 8
    cout<<yy<<endl ; // imprime:7;f() no cambia yy
}
