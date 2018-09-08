#include <iostream>
using namespace std;
//x=codigo, y= cantidad
//1. cachorro quente- 4.00
//2. x- salada- 4.50
//3. x- bacon- 5.00
//4. torrada simples- 2.00
//5. refrigerente- 1.50
int main(){
    int x, y, total;
    cin >> x >> y;
    if (x==1){
        total=4*y;
        cout << "Total: $ " << total << "\n";
    }
    if (x==2){
        total=4,5*y;
        cout << "Total: $ " << total << "\n";
    }
    if (x==3){
        total=5*y;
        cout << "Total: $ " << total << "\n";
    }
    if (x==4){
        total=2*y;
        cout << "Total: $ " << total << "\n";
    }
    if (x==5){
        total=1,5*y;
        cout << "Total: $ " << total << "\n";
    }

}

