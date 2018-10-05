#include <iostream>
using namespace std;
int main(){
    double x,y;

    while (cin>>x && x!='#'&& cin>>y && y!='#'){
            double w;
            if (x>y){
                       cout<<"el mayor es:"<<x<<" ";
                       cout<<"el menor es:"<<y;
                       w=x-y;
                       if (w<=0.01){
                           cout<<"los números son casi iguales";
                       }
            }

            else if(x==y){
                cout<<"son iguales";
            }
            else{
                w=y-x;
                cout<<"el mayor es:"<<y;
                cout<<"el menor es:"<<x;
                if(w<=0.01){
                    cout<<"son casi iguales";
                }
            }
    }
}






