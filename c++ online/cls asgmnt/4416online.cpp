#include<iostream>
using namespace std;

class Person
{
    char *name;
    int age;
    char gender;
    char *address;
public:
    Person(char *n, int a, char g, char *ad)
    {
        age=a;
        gender=g;
        name=n;
        address=ad;
    }
    void showP()///details info of a person to be showed
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Gender : "<<gender<<endl;
        cout<<"Address : "<<address<<endl;
    }
};

class Student:public Person
{
    int id;
    char *deptName;
public:
    ///define constructor

    Student (char *name, int age, char gender, char *address, int i, char *dept):Person(name, age, gender, address)
    {
        id=i;
        deptName=dept;
    }
    void showS()///details info of a student to be showed
    {
        showP();
        cout<<"ID : "<<id<<endl;
        cout<<"Department : "<<deptName<<endl;
    }
};

class Worker:public Person
{
    int BasicSalary;
    char *designation;
    int weeklyContactHour;
public:
    ///define constructor
    Worker(char *name, int age, char gender, char *address,int b, char *d, int wCH):Person(name, age, gender, address)
    {
        BasicSalary=b;
        weeklyContactHour=wCH;
        designation=d;
    }
    void showW()///details info of a worker to be showed
    {
        showP();
        cout<<"Designation : "<<designation<<endl;
        cout<<"Monthly Salary : "<< ((4*weeklyContactHour)*500)+BasicSalary<<endl;
    }
};

int main()
{
    char *name, *add, *post, *dept, gender;
    name=new char;
    add=new char;
    post=new char;
    dept=new char;
    int age, id, salary, wCH;

    //Worker w1;
    cout<<"Student"<<endl<<endl;
    cout<<"Name : ";
    cin>>name;
    cout<<endl<<"Age : ";
    cin>>age;
    cout<<endl<<"Gender : ";
    cin>>gender;
    cout<<endl<<"Address : ";
    cin>>add;
    cout<<endl<<"ID : ";
    cin>>id;
    cout<<"Department : ";
    cin>>dept;
    Student s1(name, age, gender, add, id, dept);
    s1.showS();
    cout<<endl<<endl<<"Teacher"<<endl<<endl;
    //w1.showW();
    return 0;
}
