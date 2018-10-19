#include <iostream>
#include <vector>
using namespace std;

void num_p(int x, vector <int> & numb  ){

    numb.push_back(1);
    int i=1;
    int cont=0;
    while(i<=x){
        cont=0;
        while(i<=x){
            if(x%i==0){
                cont++;
            }
            i++;
        }
        if(cont==2){
            numb.push_back(x);
        }
        i=1;
        x=x-1;
    }

}

int main(){

    vector <int> numb;
    int x;
    cin>>x;
    num_p(x,numb);
    int s=0;
    while(s<numb.size()){
        cout<<numb[s]<<endl;
        s++;
    }
}
