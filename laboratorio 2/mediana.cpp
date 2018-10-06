#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    vector <double> temps;
    double temp;
    while (cin>>temp && temp!='#'){
        temps.push_back (temp);
    }
    sort(temps.begin(),temps.end());
    if (temps.size()%2==0){
        double i=temps[temps.size()/2];
        cout<<"mediana:"<<i+1/2;
    }
    else{
        cout<<"Mediana: "<<temps[temps.size()/2]<<"\n";

    }




}
