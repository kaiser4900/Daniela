#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector <double> num;
    vector <string> num_s;
    double x;
    string y;
    while (cin>>x && x!='#' && cin>>y && y!="#"){
        if (y=="in"){
            double in=x*0.0254;
            num.push_back(in);
            num_s.push_back(y);
        }
        else if (y=="cm"){
            double cm=x*0.01;
            num.push_back(cm);
            num_s.push_back(y);
        }
        else if (y=="ft"){
            double ft=x*0.3048;
            num.push_back(ft);
            num_s.push_back(y);
        }
        else if (y=="m"){
            num.push_back(x);
            num_s.push_back(y);
        }
        else{
            cout<<"unidad no conocida :(";
            main();
        }
    }

    sort(num.begin(),num.end());
    cout<<"ordenado en metros: ";
    for(int i=0; i<num.size(); i++){
            cout<<num[i]<<"\n";
    }


}
