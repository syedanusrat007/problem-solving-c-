#include <iostream>

using namespace std;
class Student
{
private:
int marks;
char grade;
public:
Student(int m, char g)
{
marks= m;
grade= g;
}
void show()
{cin>>marks;
cout<<"Marks ="<<marks<<endl;
cin>>grade;
cout<<"Grade = "<<grade<<endl;
}
};
main()
{
Student s1, s2;
cout<<"Record of student 1:"<<endl;
s1.show();
cout<<"Record of student 2:"<<endl;
s2.show();

}
