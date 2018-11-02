#include <iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;


char jug_c(char t_ju){
    int c;
    srand(time(NULL));
    c=120+rand()%(123-120);
    char x=c;
    return x;

}
int main(){
    cout<<"x=tijera, y=papel, z=piedra"<<endl;
    char jugador, j_c;
    int cont=0;
    int cont_c=0;
    while(cont!=3){
        try{
        cin>>jugador;
        if(jugador!='x'&&jugador!='y'&&jugador!='z'){
            throw jugador;
        }
        }
        catch(char e){
            cout<<" it is not part of the options, try aqain please"<<endl;
        }
        switch(jugador){
            case 'x':
                j_c=jug_c(jugador);
                cout<<j_c<<endl;
                if(j_c=='x'){
                    cont_c=cont_c;
                }
                else if(j_c=='y'){
                    cont++;
                }
                else{
                    cont_c++;
                }
                break;
            case 'y':
                j_c=jug_c(jugador);
                cout<<j_c<<endl;
                if(j_c=='x'){
                    cont++;;
                }
                else if(j_c=='y'){
                    cont_c++;
                }
                else{
                    cont++;
                }
                break;
            default:
                j_c=jug_c(jugador);
                cout<<j_c<<endl;
                if(j_c=='x'){
                    cont_c=0;
                }
                else if(j_c=='y'){
                    cont++;
                }
                else{
                    cont_c=cont_c;
                }
                break;
        }
    }
    if(cont==3){
        cout<<"ganaste"<<endl;

    }
    else{
        cout<<"perdiste"<<endl;
    }

}
