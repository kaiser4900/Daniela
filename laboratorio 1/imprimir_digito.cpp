//hacer un programa que lea el nombre del numero e imprima el digito
#include <iostream>
using namespace std;
int x;
int main() {
  cout << "ingrese número de 0-4 \n";
  cin >> x;
  if (x==0)
     cout << "Cero ";
  if (x==1)
     cout << "Uno ";
  if (x==2)
     cout << "Dos ";
  if (x==3)
     cout << "Tres ";
  if (x==4)
     cout << "Cuatro ";
  if (x>4)
     cout << "No es un número que conozco \n";


}
