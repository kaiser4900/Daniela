#include <iostream>
using namespace std;
int x;
int i=0;
int main() {
  cout << "Ingrese cantidad : ";
  int x;
  cin >> x;
  int i=0;
  i=x/100;
  x=x%100;
  cout << i << " de 100 \n";
  i=x/50;
  x=x%50;
  cout << i << " de 50 \n";
  i=x/20;
  x=x%20;
  cout << i << " de 20\n";
  i=x/10;
  x=x%10;
  cout << i << " de 10\n";
  i=x/5;
  x=x%5;
  cout << i <<" de 5\n";
  i=x/2;
  x=x%2;
  cout << i << " de 2 \n";
  i=x/1;
  x=x%1;
  cout << i <<" de 1 \n";


}
