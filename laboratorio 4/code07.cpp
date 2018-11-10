#include <iostream>
using namespace std;
class C{
    public:
        void f();
        void g(){
        } // F u n ci o n miembro de l a c l a s e
};
// C l a s e s a n i d a d a s : U t i l s o l o pa ra c l a s e s c om p l i c a d a s
class C{
    public:
        struct M{
        };
};
// C l a s e s d e n t r o de f u n c i o n e s : c l a s e s l o c a l e s (EVITALAS)
// F u n ci o n muy l a r g a
void f()
{
    class L{
    };
}
void f1(int x,int y)
{
    if (x>y){
// . . .
    }
    else{
// . . .
        {
// . . .
        }
// . . .
    }
}
