#include <iostream>
using namespace std;

int main(){
   double x,y;
   char i;
   while (cin>>x>>y>>i){
   switch (i){
   case '+':
       cout<<x+y<<"\n";
       break;
   case '-':
       cout<<x-y<<"\n";
       break;
   case '/':
        cout<<x/y<<"\n";
        break;
   default:
        cout<<x*y<<"\n";
        break;
   }
   }




}
