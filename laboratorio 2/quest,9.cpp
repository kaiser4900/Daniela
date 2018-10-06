#include <iostream>
using namespace std;
int main(){
    double x;
    double mayor=0, suma=0;
    double in,cm,ft;
    string y;
    cout<<"Medidas: in,cm, ft, m";
    while (cin>>x && x!='#' && cin>>y && y!="#"){
        if(y=="in"){
                in=x*0.0254;
                if (in>mayor){
                        mayor=in;
                        suma=suma+in;
                        cout<< " es el mayor hasta ahora"<<"\n";
                        cout<< " la suma hasta ahora es: "<<suma<<" en metros"<<"\n";
                }
                else{
                        cout<< " la suma hasta ahora es: "<<suma<<" en metros"<<"\n";
                        cout<<" es el menor hasta ahora"<<"\n";
                }
        }
        else if(y=="cm"){
                cm=x*0.01;
                if(cm>mayor){
                        mayor=cm;
                        cout<<" es el mayor hasta ahora"<<"\n";
                        suma=suma+cm;
                        cout<< " la suma hasta ahora es: "<<suma<<" en metros"<<"\n";
                }
                else{
                    cout<< " la suma hasta ahora es: "<<suma<<" en metros"<<"\n";
                    cout<<" es el menor hasta ahora"<<"\n";
                }
        }
        else if (y=="ft"){
               ft=x*0.3048;
               if (ft>mayor){
                    mayor=ft;
                    cout<< " es el mayor hasta ahora"<<"\n";
                    suma=suma+ft;
                    cout<< " la suma hasta ahora es: "<<suma<<" en metros"<<"\n";
               }
               else{

                    cout<< " es el menor hasta ahora"<<"\n";
                    cout<< " la suma hasta ahora es: "<<suma<<" en metros"<<"\n";
               }
        }
        else if (y=="m"){
                if(x>mayor){
                        mayor=x;
                        cout<<"  es el mayor hasta ahora"<<"\n";
                        suma=suma+x;
                        cout<< " la suma hasta ahora es: "<<suma<<" en metros"<<"\n";

                }
                else{

                        cout<< " es el menor hasta ahora"<<"\n";
                        cout<< " la suma hasta ahora es: "<<suma<<" en metros"<<"\n";
                }
        }
        else{
            cout<<"no conozco esta unidad :("<<"\n";
            main();
        }


    }

}
