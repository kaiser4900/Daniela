#include <iostream>
#include <vector>
#include "Mamiferos.h"
using namespace std;

int main()
{
    try{
    enum Genero_{
        hembra=1, macho=2
    };
    cout<<"----"<<endl;
    int n_pa,an,an_a;
    string ty,co,ge;
    cout<<"Ingresar animal: ";
    cin>>ty;
    cout<<endl<<"Ingresar género: ";
    cin>>ge;
    cout<<endl<<"Ingresar color: ";
    cin>>co;
    cout<<endl<<"# patas: ";
    cin>>n_pa;
    cout<<endl<<"Anhio nacimiento: ";
    cin>>an;
    cout<<endl<<"Anhio actual: ";
    cin>>an_a;
    Mamiferos x(an,an_a,n_pa,ty,co,ge);
    cout<<endl<<"--------------"<<endl;
    cout<<x.get_color()<<endl;
    cout<<x.get_genero()<<endl;
    cout<<x.get_tipo()<<endl;
    cout<<x.get_pa()<<endl;
    }
    catch(exception& e){
        cerr<<endl<<"Error: :("<<e.what()<<endl;
        return 0;
    }
}

