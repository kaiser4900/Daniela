//ESCRIBA UN PROGRAMA QUE LEA OP 100 3.4 Y DE EL RESULTADO
#include <iostream>
using namespace std;
char op;
int suma, mult, resta;
double div;
int x, y;

int main() {
  cout<< "(+,-,*,/): ";
  cin >> op;
  cout << "Primer número: ";
  cin >> x;
  cout << "Segundo número: ";
  cin >> y;
  if (op=='+')
     suma=x+y;
     cout <<"La suma es " << suma << "\n";
  if (op=='-')
     resta=x-y;
     cout<< "La resta es " << resta << "\n";
  if (op=='*')
     mult=x*y;
     cout << "la multiplicacion es " << mult << "\n";
  if (op=='/')
     div=(double)x/y;
     cout << "La división es " << div << "\n";

}
