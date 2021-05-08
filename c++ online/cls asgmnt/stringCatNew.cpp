#include <iostream>
#include <string.h>
using namespace std;

class str{
    char *p;
    int sz;
public:
    str(string s){
        sz = s.length();
        p = new char [sz];
        for(int i=0; i<sz; i++) p[i] = s[i];
        cout << "parameterized constructor\n";
    }
    str(const str &sp){
        sz = sp.sz;
        p = new char [sz];
        for(int i=0; i<sz; i++) p[i] = sp.p[i];
        cout << "Copy Constructor\n";
    }
    ~str(){
        delete [] p;
        cout << "Destroy!" << endl;
    }
    void addStr(string x){
        char *temp = new char [sz];
        ///temporary pointer to store current str (calling object)
        for (int i=0; i<sz; i++) temp[i] = p[i];  ///copying by loop
        /// also can be copied like following line
        strcpy(temp, p); ///for this function string.h header file is needed

        delete [] p;
        /// we are deleting p (which is current str and calling object) because we need to increase its size
        p = new char[sz + x.length()]; ///we re-allocate memory of p with increased size
        for(int i=0; i<sz; i++) p[i] = temp[i]; ///copy from temporary back to main str
        delete [] temp; /// delete the temporary pointer, don't need it anymore
        for(int i=sz, j=0; j < x.length(); i++, j++) p[i] = x[j]; ///copying the string which was passed
        sz += x.length(); ///finally increased value of sz variable by new string length

        ///why increase sz variable at the end and not in the beginning? cause amar ovabe shubidha lagse :3
        ///and sz er ager value ta amar dorkar hocchilo...so agei ami increase kore dei nai,
    }
    friend void display(str x);
    friend void display(str *x);
};

void display(str x){
    for(int i=0; i < x.sz; i++) cout << x.p[i];
    cout << endl;
}

void display(str *x){
    for(int i=0; i < x->sz; i++) cout << x-> p[i];
    cout << endl;
}

int main()
{
    str s("It");
    display(s);
    s.addStr(" Was great");
    display(&s);
    return 0;
}
