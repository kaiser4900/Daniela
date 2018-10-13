#include <iostream>
using namespace std;

int main(){
    int ex_ma=100;
    int ex_me=1;
    int medio;
    string y;

    while (ex_me + 1<ex_ma){

        medio = (ex_ma - ex_me)/2 + ex_me;
        cout<<"mayo o igual a "<<medio<<": ?";
        cin>>y;
        if(y=="no"){
            ex_ma= medio;
            cout<<"Extremo izquierdo: "<<ex_me<<endl;
            cout<<"Extremo derecho: "<<ex_ma<<endl;

        }
        else{
            ex_me= medio;
            cout<<"Extremo izquierdo: "<<ex_me<<endl;
            cout<<"Extremo derecho: "<<ex_ma<<endl;
        }
    }
    cout<<ex_me<<"?";
}
