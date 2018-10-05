#include <iostream>
#include <vector>
using namespace std;

int main(){
    double x,mayor;

    while (cin>>x && x!='#'){

           if (x>mayor){
               mayor=x;
               cout<< "es el mayor hasta ahora";
           }
           else{
               cout<<"es el menor hasta ahora";

           }

    }
}
