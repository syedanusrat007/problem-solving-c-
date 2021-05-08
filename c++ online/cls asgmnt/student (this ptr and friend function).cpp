#include <iostream>
using namespace std;
class Student{
    int ID; string name;
public:
    Student (){
        this->ID=0; this->name="NULL";
        cout<<"Constructor 1 is called"<<endl;
    }
    Student(int ID, string name){
        this->ID=ID; this->name=name;
        cout<<"Constructor 2 is called"<<endl;
    }
    Student& verifyDetails (){
        if( this->ID >0 && this->ID<=100)
            cout<<"ok"<<endl;
        else {
            this->ID=0;
            this->name="";
        }
        return *this;
    }
    friend void displayStudent(Student s);
};
 void displayStudent(Student s){
	cout<<"Student ID   : " <<s.ID<<endl;
	cout<<"Student name : " <<s.name<<endl;
    }
int main(){
    Student s1(1,"Aditi");
    displayStudent(s1);
    cin.get();
    cout<<"*******"<<endl;
    Student arryS1[2];
    displayStudent(arryS1[0]);
    displayStudent(arryS1[1]);
    cin.get();
    cout<<"*******"<<endl;
    Student arryS2[3]={{2,"Raj"}, {3,"Alam"}};
    displayStudent(arryS2[0]);
    displayStudent(arryS2[1]);
    displayStudent(arryS2[2]);
    return 0;
}
