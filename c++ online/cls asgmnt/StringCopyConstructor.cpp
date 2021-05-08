#include <iostream>
using namespace std;

class str{
   // private:
        char *p;
        int sz;
    public:
        str(string s){
            sz = s.length();
            p = new char [sz];
            for(int i=0; i<sz; i++) p[i] = s[i];
            cout << "parameterized constructor" << endl;
        }
        str(const str &sp){
            sz = sp.sz;
            p = new char [sz];
            for(int i=0; i<sz; i++) p[i] = sp.p[i];
            cout << "copy constructor" << endl;
        }
        ~str(){
            delete [] p;
            cout << "destroy!" << endl;
        }
        friend void display(str s);

};

void display(str s)
{
    for(int i=0; i<s.sz; i++) cout << s.p[i];
    cout << endl;
}

int main()
{
    str mama("JINN");
    display(mama);
    return 0;
}
