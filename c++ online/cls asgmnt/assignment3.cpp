#include<iostream>
using namespace std;

class Student;///Class prototype

class Teacher ///Class Definition
{
    public:
        Teacher()
        {
            cout<<"Teacher Constr called!!!"<<endl;
        }
        ~Teacher()
        {
            cout<<"Teacher Destructor called !!!"<<endl;
        }
    void display(Student b);
};

class Student
{
    string name;
    int ID;


public:
    Student()
    {
        ID=0;
        name='\0';
        cout<<"Constr Called!!!"<<endl;
    }
    Student(int roll, string n)
    {
        cout<<"parameterized Constr called!!!"<<endl;
        ID=roll;
        name=n;
    }
    ~Student()
    {
        cout<<"Student Destructor Called !!!"<<endl;
    }
    friend void Teacher::display(Student b);/// Friend function declaration


};

void Teacher::display(Student b)///Function Definition
    {
        cout<<endl<<"Student name: "<<b.name<<endl<<"Student ID: "<<b.ID<<endl<<endl;
    }

int main()
{
    cout<<"*** CALLING FRIEND FUNCTION FROM ONE CLASS TO ANOTHER ******"<<endl<<endl;
    Teacher d1;
    Student s1(201514008, "Maj SHAMS");

    cout<<endl<<endl<<"Teacher class DISPLAY()"<<endl;
    d1.display(s1);
    return 0;
}
