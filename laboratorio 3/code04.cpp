#include <iostream>
using namespace std;


int area (int length , int width);
int main ()
{
    int x4=area (10,7); // ok : p e r o r e c t a n g u l o
// con ancho −7?
    int x5=area (10,9); // ok : p e r o l l am a a
// a r e a ( 1 0 , 9 )
    char x6=area (100, 9999); // ok , p e r o t r u n c a
// e l r e s u l t a d o
    return area (4,4) ;
}
int area (int length, int width)

{
    return length*width ;
}
