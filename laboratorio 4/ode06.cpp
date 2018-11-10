#include <iostream>
using namespace std;

int g(int x) // g e s g l o b a l ; x e s l o c a l en g
{
    int f = x+2; // f e s l o c a l
    return 2*f ;
}
int x,y ; // v a r i a b l e g l o b a l """(EVITALAS)"""<<<<<<<<------ ok
// C l a s e s a n i d a d a s : U t i l s o l o pa ra c l a s e s c om p l i c a d a s
class C{
public:
    struct M{//bien
    };
};
// Clases dentro de funciones: clases locales (EVITALAS)
//EVITAR CLASES LOCALES
// F u n ci o n muy l a r g a
void f()
{
    class L {
    };
    // void g() {} Funciones dentro de funcineses "ilegal"
}
