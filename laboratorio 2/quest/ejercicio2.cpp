#include <iostream>
#include <vector>

using namespace std;
int x,j,k;
int mayor=0;
int menor=0;
int suma=0;
int i=0;

int main(){
    vector<double> ciu_d;
    while (cin>>x && x!='#'){
            ciu_d.push_back(x);
            suma=suma+x;
    }
    int d=1;

    while(i<ciu_d.size()){

        if (mayor<ciu_d[i]){
            mayor=ciu_d[i];
            menor=ciu_d[d-1];
        }
        else{
            mayor=ciu_d[d-1];
            menor=ciu_d[i];
        }
        i++;
        d=i;
    }

    cout<<"Distancia mayor: "<<mayor<<"\n";
    cout<<"Distancia menor "<<menor<<"\n";
    cout<<"Total suma: "<<suma<<"\n";
    cin>>j>>k;
    double med=ciu_d[j]+ciu_d[k];
    cout<<"mediana"<<med/2;


}
