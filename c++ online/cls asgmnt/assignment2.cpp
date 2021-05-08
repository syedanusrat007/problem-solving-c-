#include<iostream>
#include<string.h>
using namespace std;

class Str
{
    char *p;
    int i,sz;

public:
    Str(string s)
    {
        cout<<endl<<endl<<"Parameterized constructor called"<<endl;
        sz=s.length();
        cout<<"sz : "<<sz<<endl;
        p=new char[sz];
        for(i=0; i<sz; i++)
        {
            p[i]=s[i];
        }
        p[i]='\0';
        cout<<endl<<"string passed in pc: "<<p<<endl;
    }

    Str(const Str &sc)
    {
        cout<<endl<<"Copy Constructor Called"<<endl;
        sz=sc.sz;
        cout<<"sc.sz : "<<sz<<endl;
        p=new char[sz];
        for(i=0;i<sz;i++)
        {
            p[i]=sc.p[i];
           // cout<<sc.p[i]<<"_";
        }
        p[i]='\0';

        cout<<endl<<endl<<"String after copy: "<<p<<endl;
    }
    ~Str()
    {
        cout<<endl<<"Destructor Called"<<endl;
    }
    friend void display(Str *x);
};


void display(Str *c)
    {
        cout<<endl<<"Display(): "<<c->p<<endl;
    }

/*
void display(Str c)
    {
        cout<<endl<<"Display(): "<<c.p<<endl;
    }






*/
int main()
{
    Str ok("I LOVE MY COUNTRY");

    cout<<endl<<endl<<"****** Display 1********"<<endl;
    //display(ok);
    cout<<endl<<endl<<"********Display 2********"<<endl;
    display(&ok);
    return 0;
}
