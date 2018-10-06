#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector <double> num;
    vector <string> num_s;
    double x,mayor_n;
    double mayor=-10000000;
    string y, mayor_y;
    while (cin>>x && x!='#' && cin>>y && y!="#"){

        if (y=="in"){
            double in=x*0.0254;
            if (in>mayor){
                    mayor=in;
                    mayor_n=x;
                    mayor_y=y;
                    cout<< " es el mayor hasta ahora a "<<mayor_n<<" "<<mayor_y<<"\n";

            }
            else{

                        cout<<" es el menor hasta ahora a "<<mayor_n<<" "<<mayor_y<<"\n";
            }
            num.push_back(in);
            num_s.push_back(y);
        }
        else if (y=="cm"){
            double cm=x*0.01;
                if (cm>mayor){
                    mayor=cm;
                    mayor_n=x;
                    mayor_y=y;
                    cout<< " es el mayor hasta ahora"<<" a "<<mayor_n<<" "<<mayor_y<<"\n";
                }
                else{
                        cout<<" es el menor hasta ahora"<<" a "<<mayor_n<<""<<mayor_y<<"\n";
                }
            num.push_back(cm);
            num_s.push_back(y);
        }
        else if (y=="ft"){
            double ft=x*0.3048;
             if(ft>mayor){
                        mayor=ft;
                        mayor_n=x;
                        mayor_y=y;
                        cout<<" es el mayor hasta ahora"<<" a "<<mayor_n<<" "<<mayor_y<<"\n";

             }
              else{

                        cout<<" es el menor hasta ahora"<<" a "<<mayor_n<<" "<<mayor_y<<"\n";
              }

            num.push_back(ft);
            num_s.push_back(y);
        }
        else if (y=="m"){
            num.push_back(x);
            num_s.push_back(y);
             if(x>mayor){
                    mayor=x;
                    mayor_y=y;
                    mayor_n=x;

                    cout<<" es el mayor hasta ahora"<<" a "<<mayor_n<<" "<<mayor_y<<"\n";

             }
              else{

                        cout<<" es el menor hasta ahora"<<" a "<<mayor_n<<" "<<mayor_y<<"\n";
              }
        }
        else{
            cout<<"unidad no conocida :(";
        }
    }
    sort(num.begin(),num.end());
    cout<<"ordenado en metros: ";
    for(int i=0; i<num.size(); i++){
            cout<<"\n"<<num[i]<<"\n";
    }
}
