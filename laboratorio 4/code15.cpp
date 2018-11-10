#include <iostream>
using namespace std;
int incr1(int a){return a+1;}
// r e t o r n a e l nuevo v a l o r
void incr2 (int& a) {++a;}
// m o d i f i c a e l o b j e t o que l e pa sa n como r e f e r e n c i a
int main ()
{
    int x=7;
    x=incr1 (x); // muy obvio
    incr2 (x) ; // muy oscuro
    return 0;
}
