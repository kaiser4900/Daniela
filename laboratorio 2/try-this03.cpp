//escriba un programa que escriba los char desde la a hasta la z con su valor numerico
#include <iostream>
using namespace std;
int main(){
    char x;
    x=96;
    int y=x;

    while (x<123){
        cout<< x << " su valor numérico es: "<< y << "\n";
        x++;
        y++;
    }
}
