#include <iostream>
#include <cstring>

using namespace std;
class name {
protected :
    string s,b1;
public:
    name(string a,string b)
    {
        s=a;
        b1=b;
    }
    virtual string add(string s)=0;
    void print()
    {
        cout<<this->add(s);
    }

};
class ADD : public name {

public:
    ADD(string a,string b):name(a,b)
    {

    }
    string add(string s)
    {
        return (s+b1);
    }


};

int main()
{
    name *n=new ADD("tonni"," good");
    n->print();
    return 0;
}
