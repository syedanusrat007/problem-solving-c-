#include <iostream>
using namespace std;
class Student;
class Teacher{
    public:
    void displayStudent(Student s);
};
class Student{
    int ID; string name;
public:
    Student (){
        ID=0;
        name="NULL";
    }
    Student(int roll, string s){
        ID=roll;
        name=s;
    }
    void setStudent(int roll, string s){
        ID=roll;
        name=s;
    }
    friend void Teacher::displayStudent(Student s);
};
void Teacher::displayStudent (Student s){
    cout<<"Student details are :-"<<endl;
    cout<<"ID : "<<s.ID<<endl;    cout<<"Name : "<<s.name<<endl;
}
int main()
{
    Teacher t1;
    Student s1(1,"Aditi"),s2(2,"Ashmita"),s3(3,"Alam");
    t1.displayStudent(s3);
    return 0;
}
