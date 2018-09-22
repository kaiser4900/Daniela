//Convertir de pulgadas (in) a cm y viceversa
//sufijos ’i’ o ’c’ indican la unidad
//cualquier otro es error
#include <iostream>
using namespace std;
int main(){
    const double cm_perinch = 2.54;
    int length = 1;
    char unit;
    cout << "Por favor ingrese una longitud seguida de su unidad: \n";
    cin >> length >> unit;
    if (unit == 'i' )
        cout << length <<  " in ==" << cm_perinch*length << " cm\n" ;
    else if ( unit ==  'c' )
        cout << length << " cm ==" << length/cm_perinch << " in\n";
    else
        cout << "Lo siento, no conosco una unidad llamada" << unit << "\n" ;
}
