#include <iostream>
using namespace std;


void to_lower(char*s){
    int i=0; int tam=0;
    while(s[i]!='0'){
        tam++;
        i++;
    }
    for(int i=0;i<tam;i++){
        s[i]=s[i]+32;
    }
}
int main(){

    char* s= new char{3};
    s[0]='G';
    s[1]='F';
    s[2]='R';
    to_lower(s);
    for(int i=0;i<3;i++){
        cout<<s[i]<<endl;
    }
}
