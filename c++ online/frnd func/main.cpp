#include <iostream>
#include <stdlib.h>
using namespace std;
class student
{
    int roll;string name;
    public:
        double *p;
    student ()
    {

        roll=0;
        name="Null";
    }
     student (double a)
    {
        p=(double*) malloc(sizeof(double));
       *p=a;
        roll=0;
        name="Null";
    }
    student (int roll,string name)
    {
        this->roll=roll;
        this->name=name;
        roll=0;
        name="Null";
    }
    void setID(int a)
    {
         cin>>roll>>name;

    }
    ~student()
    {

    }
    friend void display(student s);


};
void display(student s)
{
    cout<<s.roll<<"\n"<<s.name<<endl;
}

int main()
{
   // student s1(1,"tonni");
    int n,i;
    cin>>n;
    student s3 = student(n);
    for(i=0;i<n;i++)
    {
        s3.setID(i);
        display(s3);
    }


    /*student s2;
    s2.setID();
    display(s2);*/
    return 0;
}
