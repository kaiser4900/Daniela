#include <iostream>
#include <vector>
using namespace std;

int st_n (string x){
   vector <string> num;
   num.push_back("cero");
   num.push_back("uno");
   num.push_back("dos");
   num.push_back("tres");
   num.push_back("cuatro");
   num.push_back("cinco");
   num.push_back("seis");
   num.push_back("siete");
   num.push_back("ocho");
   num.push_back("nueve");
   int s;
   int z=0;
   while(z<num.size()){
         if(x==num[z]){
            s=z;
         }
         z++;
       }
    return s;

}
int main(){

   int y;
   int z=0;
   char i;
   string x;

   while (cin>>x>>y>>i){

        int s=st_n(x);

        switch (i){
        case '+':
            cout<<s+y<<"\n";
            break;
        case '-':
            cout<<s-y<<"\n";
            break;
        case '/':
            cout<<s/y<<"\n";
            break;
        default:
            cout<<s*y<<"\n";
            break;
        }
   }

}
