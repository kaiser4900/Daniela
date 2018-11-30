#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout<<"el tama�o del char es: "<<sizeof(char)<<"   "<<sizeof('a')<<endl;// sizeof para ver el tama�o de un tipo
    cout<<"el tama�o del int es: "<<sizeof(int)<<"   "<<sizeof(2+2)<<endl;
    int*p=0;//puntero int a p es totalmente diferente al int
    cout<<"el tama�o del int* es: "<<sizeof(int*)<<"   "<<sizeof(p)<<endl;
    vector<int> v(1000);
    cout<<"el tama�o del vector int es: "<<sizeof(vector<int>)<<"   "<<sizeof(v)<<endl;
}
