#include<iostream>
using namespace std;

class Year
{
    static const int Min=1800;
    static const int Max=2200;
public:
    class Invalid{};
    Year(int x):y(x)
    {
        if(x<Min||Max<x) throw Invalid();
    }
    int year(){return y;}
private:
    int y;
};
class Date{
public:
    enum Month {
    jan=1,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dcm
    };
    Date(Year yy,Month mm, int dd):y(yy),m(mm),d(dd)
    {
    }
private:
    Year y;
    Month m;
    int d;
};
int main(){
    try{
    Date dx3(Year(1998),Date::mar,30);
    Date dx5(Year(4), Date::mar,1998);
    }
    catch(Year::Invalid&){
        cerr<<"error: Anho invalido"<<endl;
        return 1;
    }
}
