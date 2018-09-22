#include <iostream>
using namespace std;
int main(){
const double yd=0.00891;
   const double ed=1.18;
   const double ld=1.31;
   const double yus=0.52;
   //inicial de moneda a convertir
   cout<<"inical de moneda a convertir (l,y,e)";
   cout<<"para convertir de yuan a shekels (s)";
   char m;
   int y;
   int e;
   int l;
   int yu;
   cin>>m;
   switch (m){
   case 'y':
       cout<<"Monto a convertir de yenes a dolares: ";
       cin >>y;
       cout << y*yd << "USD\n";
       break;
   case 'e':
       cout<<"Monto a convertir de euros a dolares: ";
       cin >>e;
       cout<<e*ed << "EUR\n";
       break;
   case 'l':
      cout<<"Monto a convertir de libras a dolares: ";
      cin >>l;
      cout <<l*ld <<"libras esterlinas\n";
      break;
   case 's':
      cout<<"monto a convertir de yuan a shekels";
      cin>>yu;
      cout<<yu*yus<<"shekels";
      break;
   default:
    cout<<"moneda no conocida";
   }
   cout <<"inicial de la moneda a dolares a convertir (l,e,y)";
   cout <<"para convertir de shekels a yuan (s)";
   int s;
   switch (m) {
   case 'y':
       cout<<"Monto a convertir de yenes a dolares: ";
       cin >>y;
       cout << y/yd << "yenes";
       break;
   case 'e':
       cout<<"Monto a convertir de euros a dolares: ";
       cin >>e;
       cout<<e/ed << "EUR";
       break;
   case 'l':
      cout<<"Monto a convertir de libras a dolares: ";
      cin >>l;
      cout <<l/ld <<"libras esterlinas\n";
      break;
   case 's':
      cout<<"monto a convertir de shekels a yuan";
      cin>>s;
      cout<<s/yus<< "yuan";
      break;
   default:
    cout<<"moneda no conocida";
   }


}
