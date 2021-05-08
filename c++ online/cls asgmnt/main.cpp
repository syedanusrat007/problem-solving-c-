#include <iostream>
using namespace std;

class Student {

     int student_id;
     string name;
public:
     Student(){
        student_id=0;
        cout<< "Default like constructor"<<endl;
     }
     Student( int roll, string na){
        student_id=roll;
        name=na;
     }
     void displayStudent(){
        cout<<"ID : " <<student_id<<endl;
        cout<<"Name : "<<name<<endl;
     }
};

int main(){
    //Student s1;
    //Student s2( 2,"Aditi");
    Student *ps1= new Student();
    Student *ps2= new Student(3, "Alam");
    ps1->displayStudent();
    ps2->displayStudent();
    cout<<"Welcome to Student Admin Program : "<<endl;

    //s1.displayStudent();
    //s2.displayStudent();
    return 0;
}
