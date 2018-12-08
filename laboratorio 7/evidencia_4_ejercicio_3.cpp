#include<iostream>
using namespace std;
class Link{
    Link* prev;
    Link* succ;
public:
    string value;
    Link(const string&v, Link* p=0, Link* s=0):value(v), prev(p),succ(s){}
    Link* Insert(Link* n);//inserta n antes de objeto
    //void print();
    bool Find(const string& s);//encuentra s en la lista

};
Link* Link::Insert(Link* n)//perro
{
    Link* p=this;
    if(n==0) return p;
    if(p==0) return n;
    n->succ=p;//p viene despues de n
    if(p->prev) p->prev->succ=n;
    n->prev=p->prev;//el anterior de p sera anterior de n
    p->prev = n;//n sera el anterior de p
    return n;
}
bool Link::Find(const string& s){
    bool encontrado=false;
    Link*p=this;
    p=p->value;
    while(p!=0&&encontrado==false){
        if(p==s){
            encontrado=true;
        }
        p=p->succ;
    }
    return encontrado;
}

int main() {
    Link* s=new Link("perro");
    Link* d=new Link("gato");
    Link* x= new Link("CABEZA");
    x = x->Insert(s);
    x = x->Insert(d);
    cout<<x.Find("perro");

}
