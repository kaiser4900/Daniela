#include <iostream>
using namespace std;
void square(){
  int x;
  cin >>x;
  int y=0;
  int p=0;
  while (y<x){
       p=p+x;
       y++;
  }
  cout<<"resultado de la potencia al cuadrado:  "<<p<<"\n";
}
int main(){
  square();
}
