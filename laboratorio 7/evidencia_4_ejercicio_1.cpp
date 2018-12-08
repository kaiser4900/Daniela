#include <iostream>
using namespace std;

char* find_x(const char*s, const char*x){

    int tamanho=0; int tamanho_2=0;
    int i=0; int j=0;
    char* temp=s; char* temp_2=x;
    while(s[i]!='0'){
        tamanho++;
        i++;
    }
    while(s[j]!='0'){
        tamanho_2++;
        j++;
    }
    for(int i=0;i<tamanho;i++){
        for(int j=0;j<tamanho;j++){
            if(temp[i]==temp_2[j]){
                    char* pos=&s[i];
                    return pos;
            }
        }
    }
}
int main()
{
    char* st= new char[2];
    st[0]='h';
    st[1]='o';
    char* stx= new char[1];
    stx[0]='o';
    find_x(*st,*stx);
}
