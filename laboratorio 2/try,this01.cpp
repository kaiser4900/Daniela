#include <iostream>
using namespace std;
//un programa que convierte yenes, euros, y libras en d ́olares. Para que sea mas real puedes usar las tasas de conversi ́on del dia de hoy.
int main(){
   //yenes a dolares
   const double yd=0.00891;
   const double ed=1.18;
   const double ld=1.31;
   //inicial de moneda a convertir
   cout<<"inical de moneda a convertir (l,y,e)";
   char m;
   int y;
   int e;
   int l;
   cin>>m;
   if (m=='y')
       cout<<"Monto a convertir de yenes a dolares: ";
       cin >>y;
       cout << y*yd << "USD\n";
   if (m=='e')
       cout<<"Monto a convertir de euros a dolares: ";
       cin >>e;
       cout<<e*ed << "USD\n";
   if (m=='l')
      cout<<"Monto a convertir de libras a dolares: ";
      cin >>l;
      cout <<l*ld <<"USD\n";
   cout <<"inicial de la moneda a dolares a convertir (l,e,y)";
   if (m=='y')
       cout<<"Monto a convertir de yenes a dolares: ";
       cin >>y;
       cout << y/yd << "yenes";
   if (m=='e')
       cout<<"Monto a convertir de euros a dolares: ";
       cin >>e;
       cout<<e/ed << "EUR";
   if (m=='l')
      cout<<"Monto a convertir de libras a dolares: ";
      cin >>l;
      cout <<l/ld <<"libras esterlinas\n";


}

