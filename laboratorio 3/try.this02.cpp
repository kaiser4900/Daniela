#include <iostream>
using namespace std;

int main(){
    double a,b,c,x;
    cout<<"Equation: ax^2+bx+c=0"<<endl;
    try{
    cout<<"a: ";
    cin>>a;
    cout<<" b: ";
    cin>>b;
    cout<<" c: ";
    cin>>c;
    }

    x=(b^2)-4*a*c;
    b=0-b;
    a=a*2;
    if(x<0){
        throw x;
    }
    else{
        x=x^0.5;
        cout<<(b+ra)/a<<endl;
        cout<<(b-ra)/a<<endl;
    }

}
