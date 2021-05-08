#include <iostream>
#include <string>

using namespace std;
class person{

 string name;
 int age;
 char gender;
 string address;
 public:
     person(string a,int b,char c,string d)
     {
         name=a;
         age=b;
         gender=c;
         address=d;
     }
     void showP()
     {
         cout<<"Name :"<<name<<endl<<"Age :"<<age<<endl<<"Gender :"<<gender<<endl<<"Address :"<<address<<endl;
     }
};
class student:public person{

 int id;
 string deptName;
 public :
     student(string a,int b,char c,string d,int e,string f):person(a,b,c,d)
     {
         id=e;
         deptName=f;
     }
     void showS()
     {
         showP();
         cout<<"ID :"<<id<<endl<<"Department :"<<deptName<<endl;
     }
};
class worker:public person{

 int BasicSalary,salary,WeeklyContactHour;
 string designation;
 public:
     worker(string a,int b,char c,string d,int e,string f,int g):person(a,b,c,d)
     {
         BasicSalary=e;
         designation=f;
         WeeklyContactHour=g;
         salary=BasicSalary+WeeklyContactHour*500*4;
     }
     void showW()
     {
         showP();
         cout<<"Designation :"<<designation<<endl<<"Monthly salary :"<<salary<<endl;
     }
};

int main()
{
    student s("Ahmed Sharif",21,'M',"MIRPUR CANTONMENT",20151400,"CSE");
    s.showS();
    worker w("Imtiaz Islam",30,'M',"MIRPUR CANTONMENT",20000,"Assistant Professor",12);
    w.showW();
        return 0;
}
