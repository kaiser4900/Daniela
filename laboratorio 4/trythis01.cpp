#include <iostream>
#include <vector>
using namespace std;
void swap_v (vector<int>& s)
{
    int x=0;
    for(int r=s.size()-1; r<=0; r--){
            int a=s[r];
            s[x]=a;
            x++;
    }
}
int main(){
    vector <int> s;
    for (int x=1;x<5;x++){
        s.push_back(x);
    }
    swap_v(s);
    for(int x=0;x<s.size();x++){
        cout<<s[x];
    }
}
