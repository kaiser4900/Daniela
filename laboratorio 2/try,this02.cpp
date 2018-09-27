#include <iostream>
using namespace std;
int main(){
   const double yd=0.00891;
   const double ed=1.18;
   const double ld=1.31;
   const double sd=0.28;
   const double yud=0.28;
   //inicial de moneda a convertir
   cout<<"inical de moneda a convertir (l,y,e,s,u(yuan))";
   char m;
   int y,e,l,u,s;
   cin>>m;
   switch (m){
   case 'y':
       cout<<"Monto a convertir de yenes a dolares: ";
       cin >>y;
       cout << y <<" yenes son:" <<y*yd << " USD\n";
       break;
   case 'e':
       cout<<"Monto a convertir de euros a dolares: ";
       cin >>e;
       cout<<e<< " euros son: "<<e*ed << " USD\n";
       break;
   case 'l':
      cout<<"Monto a convertir de libras a dolares: ";
      cin >>l;
      cout <<l<< "libras son: "<<l*ld <<" USD\n";
      break;
   case 's':
      cout<<"monto a convertir de shekels a dolares";
      cin>>s;
      cout<<s<<" shekels son: "<<s*sd<<" USD \n";
      break;
   case 'u':
      cout <<"monto a convertir de yuan a dolares:";
      cin>>u;
      cout<<u << " yuan son: "<<u*yud <<" USD\n";
   default:
    cout<<"moneda no conocida\n";
   }
   switch (m) {
   case 'y':
       cout<<"Monto a convertir de dolares a yenes: ";
       cin >>y;
       cout <<y << " USD son: "<< y/yd << " yenes\n";
       break;
   case 'e':
       cout<<"Monto a convertir de dolares a euros: ";
       cin >>e;
       cout<< e << " USD son: "<< e/ed << " EUR\n";
       break;
   case 'l':
      cout<<"Monto a convertir de dolares a libras: ";
      cin >>l;
      cout <<l << " USD son: "<<l/ld <<" libras\n";
      break;
   case 's':
      cout<<"monto a convertir de dolares a shekels: ";
      cin>>s;
      cout<< s << " USD son: " << s/sd<< " shekels\n";
      break;
   case 'u':
      cout <<"monto a convertir de dolares a yuan: ";
      cin >>u;
      cout <<u << " USD son: "<< u/yud << " yuan\n";
   default:
    cout<<"moneda no conocida\n";
   }


}
