#include<iostream>
#include <vector>
using namespace std;
 int main(){
    string n;
    int p,i;
    vector<string> name;
    vector <int> punt;
    name.push_back("nombre");
    punt.push_back(1);
    while(cin>>n && n!="SinNombre" && cin>>p && p!=0){
        i=name.size()-1;
        while(i>=0){
            if(n==name[i]){
                cout<<"nombre repetido"<<endl;
            }
            else{
                name.push_back(n);
                punt.push_back(p);
            }
            i--;
        }

    }


 }
