#include <iostream>
using namespace std;


string moda(vector<string>& v){

    int i=0;
    int j=0;
    int rep=0;
    int rep_p;

    while(i<v.size()){
            j=0;
            while(j<v.size()){
                if (v[i]==v[j]){
                        cont++;
                }
                j++;
            }
            if(cont>rep){
                rep_p=v[i]
            }
            i++;
    }
    return rep_p;

}
