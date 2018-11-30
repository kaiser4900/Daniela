#ifndef MAMIFEROS_H
#define MAMIFEROS_H
#include<iostream>
#include <vector>
using namespace std;

class Mamiferos
{
    int anio;
    int anio_a;
    int edad;
    int patas;
    string tipo;
    string color;
    string genero;
    //funcion para verificar que lo que se ingrese sea string
    bool verificar_str(string r){
        int s=0;int cont=0;int q=r.size();
        vector <int> st_R;
        while(s<q){
            st_R.push_back(r[s]);
            s++;
        }
        int w=st_R.size();
        for(int i=0;i<w;i++){
            for(int s=48;s<58;s++){
                if(st_R[i]==s){
                    cont++;
                }
            }
        }
        if(cont>0){
            return 0; //valor no permitido
        }
        else{
            return 1;// sí permitido
        }
    }
    public:
        enum Genero_{
            hembra=1, macho=2
        };

        enum Tipo
        {
            perro, gato , delfin , raton , ballena , ardilla , conejo , buey , bufalo , alpaca , alce , armadillo , asno , caballo,
            cabra , mono , gorila, orangutan, camello, cuy, canguro, jirafa, elefante, cebra, chimpace,
            ciervo, nutria, coyote, lince, vaca, burro, erizo, pinguino, foca, hiena, gacela,leon, gueopardo, oso, hipopotamo, jabali, jaguar, coala, leopardo, lobo
        };
        Mamiferos();//constructor por default
        Mamiferos(int anio,int anio_a,int patas,Tipo tipo,string color,Genero_ genero);
        const int get_pa();
        const int edad_c();//edad calculada
        void cal_e();
        const string get_color();
        const string get_genero();
        const string get_tipo();
        const int get_anio_a();
};
const Mamiferos& default_ma()
{
    static const Mamiferos xa(2017, 2018,4,Mamiferos::gato,"blanco", Mamiferos::macho);
    return xa;
}
Mamiferos::Mamiferos():

    anio(default_ma().edad_c()),
    anio_a(default_ma().get_anio_a()),
    patas(default_ma().get_pa()),
    tipo(default_ma().get_tipo()),
    color(default_ma().get_color()),
    genero(default_ma().get_genero())
{

}

Mamiferos::Mamiferos(int an, int an_a,int n_pa,Tipo ty, string co, Genero_ ge)
{
    if(an>2000){
        anio=an;
    }
    else{
        throw runtime_error("wrong year");
    }
    anio_a=an_a;
    if(n_pa==0 || n_pa==2 ||n_pa==4){
        patas=n_pa;
    }
    else{
        throw runtime_error("wrong year");
    }
    if(verificar_str(ty)==1){
        tipo=ty;
    }
    else{
        throw runtime_error("invalid string");
    }
    if(verificar_str(co)==1){
        color=co;
    }
    else{
        throw runtime_error("invalid string");
    }
    if(verificar_str(ge)==1){
        genero=ge;
    }
    else{
        throw runtime_error("invalid string");
    }

    //ctor
}
void cal_e(){
    edad=an_a-an;
}
const int Mamiferos::edad_c()
{
    return edad;
}
const int Mamiferos::get_pa()
{
    return patas;
}
const string Mamiferos::get_color(){

    return color;
}
const string Mamiferos::get_genero()
{
    return genero;
}
const string Mamiferos::get_tipo()
{
    return tipo;
}
const int Mamiferos::get_anio_a(){
    return anio_a;
}
#endif // MAMIFEROS_H
