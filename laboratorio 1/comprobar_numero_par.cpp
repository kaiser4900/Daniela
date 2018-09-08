//mostrar si un numero es par
#include <iostream>
using namespace std;
int x, i;
int main() {
  cout << "Ingrese un numero: ";
  cin >> x;
  i=x%2;
  if (i==0)
     cout << "El numero " << x << " es par \n";
  else
     cout << "No es par ";

}
