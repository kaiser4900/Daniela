#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
using namespace std;

void modificar_txt();
void ingresar(string datos[11][2]);
void ingresar_productos();
void leer_txt();
int main()
{
    string proveedores[11][2]={{"McDonal's","mcdonalds123"},{"KFC","chicken2018"},{"PizzaHot","p1zz4"},
    {"Presto","prest0"},{"LaNuevaPalomino","aqp321"},{"ElTablon","tablas666"},{"Italiana","rav!ol!"},
    {"ElMamut","gigantes2018"},{"BurgerKing","dkkong"},{"ChinaWok","cajitaswok"},{"PuroLimon","f1sh"}};
    string administradores[5][2]={{"Daniela","daniela123"},{"Daniel","daniel123"},{"Guri","guri123"},{"Claudia","claudia123"},{"Franco","franco123"}};
    string tipo_u;
    cout<<"Bienvenido al sistema\n";
    cout<<"\t¿Es usted admnistrador o proveedor?"<<endl;
    cin>>tipo_u;
    if(tipo_u=="administrador")
    {
        system("cls");
        int elegir;
        ingresar(administradores);
        cout<<"\n\n\t\t1.Modificar datos\n\t\t2.Mostrar datos\n\t\t3.Administrar cuentas de proveedores\n";
        cin>>elegir;
        if(elegir==1){modificar_txt();}
        else if(elegir==2){leer_txt();}
        else if(elegir==3){
            for(int i=0; i<11; i++){
                    cout<<i+1<<proveedores[i][0]<<endl;
            }
            string e;
            int posicion;
            cout<<"¿Desea modificar?: ";
            cin>>e;
            if(e=="si"){
                cout<<"Ingrese cuenta: ";
                cin>>posicion;
                posicion=posicion-1;
                for(int i=0;i<11;i++){
                    if(i==posicion){
                        proveedores[i][0]="0";
                        proveedores[i][1]="0";
                    }
                }
            }
            else{
                cout<<"Adios\n";
            }
        }
        else{cout<<"no es parte de las opciones\n";}
    }

    else if(tipo_u=="proveedor")
    {
        system("cls");
        ingresar(proveedores);
        system("cls");
        ingresar_productos();
    }
    else{
        cout<<"Ingresar opción correcta"<<endl;
    }

    return 0;
}

void ingresar(string datos[11][2]){

        string usuario;
        string pass;
        string ctr;
        int correcto=0;

        while(correcto!=1){
            system("cls");
            cout << "Ingresar Usuario: "<< endl;
            cin>>usuario;
            for(int i=0; i<11; i++){
                if(datos[i][0]==usuario){
                    pass=datos[i][1];
                    correcto=1;
                }
            }
            if(correcto==1){
                correcto=0;
                while (correcto!=1){

                cout<<"Ingresar Password"<<endl;
                cin>>ctr;
                if(ctr==pass){
                    correcto=1;
                    system("cls");
                }
                else{
                    cout<<"Password Invalida. Por favor vuelva a ingresar los datos."<<endl;
                    correcto=0;
                }
                }
            }
            else{
                    cout<<"Usuario Invalido. Por favor vuelva a ingresar los datos."<<endl;
                    correcto=0;
            }
        }
    }
void ingresar_productos()
{
    ofstream archivo;
    string nombre;
    string precio;
    string stock;
    archivo.open("productos.txt",ios::app);
    if(archivo.fail()){
        cout<<"No se pudo abrir el archivo"<<endl;
        exit(1);
    }
    cout<<"\n\n\tIngresar nombre del producto: ";
    cin>>nombre;
    cout<<"\tIngresar precio del producto: ";
    cin>>precio;
    cout<<"\tIngresar stock del producto: ";
    cin>>stock;
    archivo<<nombre<<","<<precio<<","<<stock<<","<<endl;
    archivo.close();
}
void modificar_txt(){
    ofstream archivo_comidas;
    archivo_comidas.open("productos.txt",ios::out);
    if(archivo_comidas.fail()){
        cout<<"no se pudo abrir el archivo";
        exit(1);
    }
    archivo_comidas<<"\t\tListado de comidas\n";
    string tipo_comida_ingresar;
    while(tipo_comida_ingresar!="finish"){
        cin>>tipo_comida_ingresar;
        archivo_comidas<<"\n"<<tipo_comida_ingresar;
    }
    archivo_comidas.close();
}
void leer_txt()
{
    ifstream archivo_comidas;
    string txt;
    archivo_comidas.open("productos.txt",ios::in);
    if(archivo_comidas.fail()){
        cout<<"no se pudo abrir el archivo"<<endl;
        exit(1);
    }
    while(!archivo_comidas.eof()){
        getline(archivo_comidas,txt);
        cout<<txt<<endl;
    }
}
