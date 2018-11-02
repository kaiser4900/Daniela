#include <iostream>
using namespace std;

int main(){
    int cont=0;
    int i=100;
    int j=100;
    while(i!=0){
        j=i;
        cont=0;
        while(j!=0){
            if(i%j==0){
                cont++;
            }
            j--;
        }
        if(cont==2){
            cout<<i<<endl;
        }
        i--;

    }

}
