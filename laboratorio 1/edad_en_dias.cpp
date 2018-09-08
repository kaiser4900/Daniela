#include <iostream>
using namespace std;
int main(){
    int edad;
    int dias;
    int meses;
    int years;
    cin >> edad;

    years=edad/365;
    edad=edad%365;
    meses=edad/30;
    edad=edad%30;
    dias=edad/1;

    cout << years << " years \n" << meses << " months\n" << dias << " days\n";


}
