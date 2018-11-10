#include <iostream>
using namespace std;

int f (int); // d e c l a r a c i o n de f
int main ()
{
    int i =7 ; // d e c l a r a c i o n de i
    cout <<f(i)<< "\n ";
}
double mysqrt(double); // s i n c u e r p o de f u n c i o n
extern int a; // e x t e r n s i n
// i n i c i a l i z a c i o n no e s una d e f i n i c i o n
int a; // d e f i n i c i o n
// i n t a ; // e r r o r : d e f i n i c i o n d o b l e
int x=7; // d e f i n i c i o n
extern int x; // d e c l a r a c i o n
extern int x; // o t r a d e c l a r a c i o n


double mysqrt (double) ; // d e c l a r a c i o n
double mysqrt (double d) { return 0.0; // d e f i n i c i o n
// d o u b l e m y s q r t ( d o u b l e d ) { r e t u r n 1 . 0 ; }// e r r o r :
// d o b l e d e f i n i c i o n
double mysqrt (double); // o t r a d e c l a r a c i o n de m y s q r t
double mysqrt (double); // o t r a d e c l a r a c i o n de m y s q r t
// i n t m y s q r t ( d o u b l e ) ; // e r r o r : d e c l a r a c i o n e s
// i n c o n s i s t e n t e s de m y s q r t
double expression (); // s o l o d e c l a r a c i o n ; no d e f i n i c i o n
double primary () {
    return expression ();
}
double term ( ) {
    return primary ();
}
double expression () {
    return term ();
}
int f (int n) {
    return n;
}
