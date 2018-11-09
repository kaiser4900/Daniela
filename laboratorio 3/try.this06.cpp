#include <iostream>
#include <vector>
#include<stdlib.h>
#include<time.h>
using namespace std;

void dig_r(vector<int> & num){
    srand(time(NULL));
    int x=rand()%10;
    int i=0;
    num.push_back(x);
    while(i<3){
        if(num[i]!=x){
            num.push_back(x);
        }
        else{
            x=rand()%10;
            num.push_back(x);
        }
        i++;
    }
}

void jugar(){
    int y;
    vector <int> num;
    vector <int> jug;
    dig_r(num);
    for(int i=0; i<num.size();i++){
        cout<<num[i];
    }
    cout<<endl;
    int toro=0;
    int vaca=0;
    while(toro!=4){
        toro=0;
        vaca=0;
        int i=0;
        int x=0;
        for(int x=0;x<4;x++){
            cout<<"Digito: ";
            cin>>y;
            jug.push_back(y);
        }
        while(i<4){
            x=0;
            while(x<4){
                if(num[i]==jug[x]){
                    if(i==x){
                        toro++;

                    }
                    else{
                        vaca++;

                    }
                }
                x++;
            }
            i++;
        }
        cout<<"toros: "<<toro<<endl;
        cout<<"vacas: "<<vaca<<endl;
        jug.clear();
    }
    if(toro==4){
        cout<<"Ganaste"<<endl;
    }
    string ans;
    cout<<"¿Volver a jugar?: ";
    cin>>ans;
    if(ans=="si"){
            jugar();
    }
    else{
        cout<<"thx";
    }
}
int main(){
    jugar();
}
