#include <include>
using namespace std;
struct Date
{
    Date(int y, int m, int d) { /∗ . . . ∗/ }
};
namespace good
{
    const Date default date(1970,1,1);
// La f e c h a p o r d e f e c t o e s e l 1 de Ene ro de 1970
}
namespace better
{
    const Date default date() // r e t o r n a l a f e c h a p o r d e f a u l t
    {
        return Date (1970,1,1) ;
    }
}
namespace best
{
    const Date& default date()
    {
        static const Date dd (1970,1,1);
        // i n i t i a l i z e dd l a p r im e r a v e z que e n t r a a q u i
        return dd ;
    }
}
int main ()
{
    Date d1 = good::default date;
    Date d2 = better::defaultdate();
    Date d3 = best::default date();
}
