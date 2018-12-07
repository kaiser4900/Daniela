#include <iostream>
using namespace std;

class Link{
    Link* prev;
    Link* succ;
public:

    string value;
    Link(const string&v, Link* p=0, Link* s=0):value(v), prev(p),succ(s){}
    Link* Insert(Link* n);//inserta n antes de objeto
    void print();
    /*Link* Erase();//elimina el objeto de la lista
    Link* Find(const string& s);//encuentra s en la lista
    const Link* Find(const string& s) const;
    Link* next()const {return succ;}
    Link* previous() const {return prev;}*/
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

void Link::print()
{
    Link* p=this;
    while(p){
            cout<<p->value<<endl;
            p=p->succ;
    }
}

int main()
{
    Link* s=new Link("perro");
    Link* d=new Link("gato");
    Link* x= new Link("CABEZA");
    x = x->Insert(s);
    x = x->Insert(d);
    x->print();
    return 0;
}
