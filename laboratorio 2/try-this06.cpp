#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector <string> b_words;
    b_words.push_back("shit");
    b_words.push_back("fuck");
    b_words.push_back("carajo");
    b_words.push_back("mierda");
    b_words.push_back("motherfucker");
    b_words.push_back("bitch");
    b_words.push_back("maldito");
    b_words.push_back("maldita");
    b_words.push_back("perra");
    b_words.push_back("puta");
    b_words.push_back("puto");
    b_words.push_back("zorra");
    b_words.push_back("nigga");
    b_words.push_back("nigger");
    b_words.push_back("bullshit");
    vector <string> words;
    string x="b";

    while(cin>>x && x!="a"){
        words.push_back(x);
    }
    int i=0;
    int r=0;


    while(i<words.size()){
        r =0;
        while (r<b_words.size()){
              if (words[i]==b_words[r])
                  words[i]="pii";
              r++;
        }
        i++;
    }
    for (int s=0; s<words.size();s++)
        cout<<words[s]<<"\n";







}

