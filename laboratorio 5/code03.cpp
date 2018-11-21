#include <isotream>
using namespace std;

struct Date{
    int y; // y e a r
    int m; // month i n y e a r
    int d; // day o f month
};
// F u n c i o n e s de ayuda
void init_day(Date&dd,inty,int m, int d){}
void addday (Date&dd, int n){}
int main ()
{
    Date hoy;
    init_day(hoy,12,24, 2005); // E r r o r :
    addday (today,1) ;
    return 0;
}
