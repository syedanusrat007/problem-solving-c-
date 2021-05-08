#include<iostream>
#include<string.h>
using namespace std;

class Student
{
    //int id,
    int sz;
    char *p;
public:
    Student()
    {
        //id=0;
        p=new char;
        p="NULL";
        cout<<"Default constructor"<<endl;
    }
    Student( string q)
    {
        //id=x;
        sz=q.length();
        p=new char[sz];
        for(int i=0; i<sz; i++)
        {
            p[i]=q[i];
        }
        p[sz]='\0';

        cout<<"Parameterized constructor called\t"<<p<<endl;
    }
    ~Student()
    {
        delete[] p;
        cout<<"destructor called"<<endl;
    }

    void setValue(/*int x,*/ string q)
    {
        //id=x;
        sz=q.length();
        p=new char[sz];
        for(int i=0; i<sz; i++)
        {
            p[i]=q[i];
        }
        p[sz]='\0';

        cout<<"setValue():\t"<<p<<endl;
    }

    friend void display(Student x);

};
void display(Student obj1)
    {
        cout<<"Friend Function Called"<<endl/*<<"ID: "<<obj1.id*/<<" Name: "<<obj1.p<<endl;
    }


int main()
{
    Student s1;
    display(s1);

    Student s2("Maj Shams");
    display(s2);

    s1.setValue( "Maj Saifullah");
    display(s1);

    cout<<"End"<<endl;
    cin.get();

    display(s2);
    display(s1);

    return 0;
}
