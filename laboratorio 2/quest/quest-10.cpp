#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <double> num;
    vector <string> num_s;
    double x;
    string y;
    while (cin>>x && x!='#' && cin>>y && y!="#"){
            num.push_back(x);
            num_s.push_back(y);
    }
//¡Para dejar de ingresar números, ingresar el # y poder pasar a la impresión :v
    for(int i=0;i<num.size();i++){
        cout<<num[i]<<" "<<num_s[i]<<"\n";
    }


}
