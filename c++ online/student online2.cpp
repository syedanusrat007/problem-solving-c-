#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class student{
 string name;
    int id,length;;
    public:
       student()
    {
       id=0;

      name="NULL";
    }
    student(string a,int b)
    {
       id=b;
      name=a;
      length=a.size();

      cout<<"const"<<endl;
    }
    student(const student& ob){
         int i;
    length = ob.length;
    name= new char [length];
    for (i=0;i<length;i++)
        name[i]= ob.name[i];
    name[length] = '\0';
    cout<<"cpy"<<endl;
    }



};
int main()
{
    string a;int b;
    getline(cin,a);
    cin>>b;
    student s(a,b);
    student s1=s;

    return 0;
}
