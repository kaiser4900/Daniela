#include <iostream>
#include <vector>
using namespace std;

int main(){
    double x;
    vector<int> m_m;
    m_m.push_back(0);
    while (cin>>x && x!='#'){
            m_m.push_back(x);
            int t=m_m.size();
            if(m_m[t-1]>m_m[t-2]){
                    cout<<"es el mayor hasta ahora"<<" ";
            }
            else{
                    cout<<"es el menor hasta ahora";
            }
    }
}
