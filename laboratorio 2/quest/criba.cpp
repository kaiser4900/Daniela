#include <iostream>
#include <vector>
using namespace std;

void cr_nu(int x, vector<unsigned long long int> & num){

    int i=2;
    while(i<=x){
        num.push_back(i);
        i++;
    }
}
void prim_m(int x, vector<unsigned long long int> & num){
    int s;
    int i=0;
    int a;
    while(i<x){
        s=num[i];
        while(s<x){
            a=0;
            while(a<num.size()){
                if(num[i]*s==num[a]){
                    num[a]=0;
                }
                a++;
            }
            s++;
        }
        i++;
    }
}
int main (){
    vector <unsigned long long int> num;
    unsigned long long int x;
    while (cin>>x && x!='#'){
        cr_nu(x,num);
        prim_m(x,num);

        int y=0;
        bool fin=false;

        while(y<num.size()){
                if(num[y]==x){
                    fin=true;
                }
                else{
                    fin=false;
                }
                y++;
        }
        if(fin==true){
            cout<<"es primo"<<endl;
        }
        else{
            cout<<"no es primo"<<endl;
        }
    }

}
