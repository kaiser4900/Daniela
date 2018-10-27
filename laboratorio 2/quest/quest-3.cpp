#include <iostream>

using namespace std;
int main(){
    double x;
    double mayor=0;
    double in,cm,ft;
    string y;
    while (cin>>x && x!='#' && cin>>y && y!="#"){
        if(y=="in"){
                in=x*0.0254;
                if (in>mayor){
                        mayor=in;
                        cout<< " es el mayor hasta ahora";
                }
                else{
                        cout<<" es el menor hasta ahora";
                }
        }
        else if(y=="cm"){
                cm=x*0.01;
                if(cm>mayor){
                        mayor=cm;
                        cout<<" es el mayor hasta ahora";
                }
                else{
                    cout<<" es el menor hasta ahora";
                }
        }
        else if (y=="ft"){
               ft=x*0.3048;
               if (ft>mayor){
                    mayor=ft;
                    cout<< " es el mayor hasta ahora";
               }
               else{
                    cout<< " es el menor hasta ahora";
               }
        }
        else{
                if(x>mayor){
                        mayor=x;
                        cout<<"  es el mayor hasta ahora";
                }
                else{
                        cout<< " es el menor hasta ahora";
                }
        }

    }

}


