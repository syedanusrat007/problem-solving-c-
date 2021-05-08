#include<iostream>
using namespace std;

class Student
{
    int id;
    string name;

public:
    Student()
    {
        cout<<"constructor has been called"<<endl;
        id=0;
{
        cout<<"constructor has been called"<<endl;
        id=0;

    }
    ~Student()
    {
        cout<<"Destructor has been called"<<endl;
    }
    void setStudentDetails(int roll, string name);
    void display(Student s);

};

void Student::setStudentDetails(int roll, string name)
{
    id=roll;
    name=name;

}

void Student::display(Student s)
{
    cout<<"Students ID: "<<s.id<<endl;
    cout<<"Students Name: "<<s.name<<endl;
}

int main()
{
    int s,c,i=0, r,d;
    string n;
    //Student *s1;
    cout<<"Enter The size of Student Database"<<endl;
    cin>>s;

    Student *s1= new Student[s];

    do
    {
        cout<<"Enter your choice"<<endl;
        cout<<"1. Enter student detils"<<endl;
        cout<<"2. See Student details"<<endl;
        cout<<"3. Exit"<<endl;
        cin>>c;
        switch(c)
        {
        case 1:
            if(i=s)
                {
                    cout<<"No space to include Student Details."<<endl;
                    break;
                }
            else
            {
                cout<<"Enter Roll of student: ";
                cin>>r;
                cout<<"Enter Name of Student: ";
                cin>>n;
                *s1.setStudentDetails(r, n);
                break;
            }
        case 2:
            cout<<"Enter ser no of student you want to see the details: "
            cin>> d;

            (*s1+d).display(Student s)


        case 3:
            Break;
        }
    } while(c!=3);
    return 0;




}
