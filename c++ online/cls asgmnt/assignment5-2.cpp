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
        //cout<<"sz : "<<sz<<endl;
        p=new char[sz];
        for(i=0; i<sz; i++)
        {
            p[i]=s[i];
        }
        p[i]='\0';
        //strcpy(p,s);
        cout<<endl<<"string passed in pc: "<<p<<endl;
    }

    Str(const Str &sc)
    {
        cout<<endl<<"Copy Constructor Called"<<endl;
        sz=sc.sz;
        //cout<<"sc.sz : "<<sz<<endl;
        p=new char[sz];
        p[0]='\0';
        strcpy(p, sc.p);
        cout<<endl<<endl<<"String after copy: "<<p<<endl;
    }
    ~Str()
    {
        cout<<endl<<"Destructor Called"<<endl;
    }
    friend void display(Str x);
    void addStr(Str &obj)
    {

        cout<<endl<<"Add Function called"<<endl;
        char *q;
        sz=strlen(p) + strlen(obj.p);
        q=new char[sz];
        q[0]='\0';
        strcat(q,p);
        strcat(q,obj.p);
        p=new char[sz];
        strcpy(p,q);
        delete[] q;

    }
    char* getp(){
        return this->p;
    }
};

/*void display(Str &c)
    {
        cout<<endl<<"Display(): "<<c.p<<endl;
    }
*/

void display(Str c)
{
    cout<<endl<<"Display() >>>>>: "<<c.p<<endl;
}

int main()
{
    Str name("Alamgir");
    Str ok(" is good!!!");

    cout<<endl<<endl<<"****** Display 1********"<<endl;
    display(name);

    cout<<endl<<endl<<"********Display 2********"<<endl;
    display(ok);

    name.addStr(ok);
    cout<<name.getp()<<endl;

    cout<<endl<<"******Display after adding two string*****"<<endl;
    display(name);

    return 0;

}
