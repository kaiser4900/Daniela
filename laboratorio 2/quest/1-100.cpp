 #include <iostream>
using namespace std;
int main(){
    string y;
    int menor=1;
    int mayor=100;
    cout<<"¿El número es mayor a 50?";
    cin>>y;
    if (y=="si"){
        menor=51;
        mayor=100;
        cout<<"¿El número es mayor a 75?";
        cin>>y;
        if (y=="si"){
            menor=76;
            mayor=100;
            cout<<"¿El numero es mayor a 89?";
            cin>>y;
            if(y=="si"){
                menor=90;
                mayor=100;
                cout<<"¿el número es mayor a 95?";
                cin>>y;
                if(y=="si"){
                    menor=96;
                    mayor=100;
                    cout<<"es mayor a 98?";
                    cin>>y;
                    if(y=="si"){
                        menor=99;
                        mayor=100;
                        cout<<"¿es multiplo de 2?";
                        cin>>y;
                        if (y=="si"){
                                cout<<"¿"<<mayor;
                            }
                        else{
                            cout<<menor<<"?";
                        }
                    }

                    }

                }
            }
        }
    else{
        mayor=50;
        menor=1;
        cout<<"¿el número es mayor a 25?";
        cin>>y;
        }
        if(y=="si"){
            mayor=50;
            menor=26;
            cout<<"¿el numero es mayor a 37?";
            cin>>y;
            if(y=="si"){
                    mayor=50;
                    menor=38;
                    cout<<"¿el numero es mayor a 43?";
                    cin>>y;
                    if(y=="si"){
                        mayor=50;
                        menor=44;
                        cout<<"¿el numero es mayor a 46?";
                        cin>>y;
                        if(y=="si"){
                            mayor=50;
                            menor=47;
                            cout<<"¿el numero es mayor a 48?";
                            cin>>y;
                            if(y=="si"){
                                cout<<"¿es multiplo de 2?";
                                cin>>y;
                                if(y=="si"){
                                    cout<<"50";
                                }
                                else{
                                    cout<<"49";
                                }
                            }

                            }
                        }
                    }

            }
        }



}
