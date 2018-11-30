#include <iostream>
using namespace std;

int main()
{
    int var=17;
    int* ptr=&var;//va a guardar la dirección de var en el espacio de ptr
    char ch='c';
    char* pc=&ch;
    int ii=17;
    int* pi=&ii;
    cout<<"pc= "<<pc<<" contenido de pc= "<<*pc<<endl;
    cout<<"pi= "<<pi<<" contenido de pi= "<<*pi<<endl;
    *pc='x';//se le asigna 'x' al char apuntado por pc
    *pi=27;//se le asigna un int al *pi , entonces *pi es un int
    *pi=*pc;//se le puede asignar el puntero char al int
    {
        char ch1='a';
        char ch2='b';
        char ch3='c';
        char ch4='d';
    }



}
