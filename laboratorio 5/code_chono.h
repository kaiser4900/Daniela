#ifndef code_chrono_H
#define code_chrono_H

#include <iostream>
using namespace std;


namespace Chrono
{
    class Date{
    public:
        enum Month{
            jan=1,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec
        };
        class Invalid{};//para lanzar exceociones
        Date (int y, Month m,int d);
        Date();//constructor por default
        //operaciones que no se modifican
        int day() const {return d;}
        Month month() const {return m;}
        int year() const {return y;}
        //operaciones que se modifican
        void add_day(int n);
        void add_month(int n);
        void add_year(int n);
    private:
        int y;
        Month m;
        int d;
    };
    bool is_date(int y,Date::Month m, int d);//valida fechas, true para fecha valida
    bool leapyear(int y)//true si es año bisiesto
    bool operator==(const Date&a,const Date&b);
    bool operator!=(const Date&a, const Date&b);
    ostream& operator<<(ostream& os,const Date&b);
    istream& operator>>(istream& is, Date&dd);
}
#endif

