#include <iostream>
using namespace std;
int area (int length,int width);
int main ()
{
int x =area(2,3);
}
// i n t a r e a ( i n t x , i n t y ) { r e t u r n x∗y ; } // e s e s t a
// F u n c i o n e s con mismo nombre p e r o d i f e r e n t e s t i p o s
// no c o i n c i d e n y s on i g n o r a d a s .

double area (double x ,double y)
{
    return x*y;
}
int area (int x ,int y ,char unit) {
    return x*y;
}
