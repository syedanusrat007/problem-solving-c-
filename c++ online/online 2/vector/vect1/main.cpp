#include <iostream>
#include <vector>
#include <cstring>
#include <exception>

class myexception: public exception{

public:
    virtual const char* what()  const throw (){
    return "memory";}


};

class student{
 string name ;
 int id;
 public:
     student(string a,int b)
     {
         name=a;
         id=b;     }
   void display()
   {
       cout<<name<<endl<<id;
   }


};
using namespace std;

int main()
{
    vector<student>v;
    string a;
    int b,i;
    for(i=0;i<2;i++)
    {
        student s;
        try{
        getline(cin,a);
        int d=strlen(a);
        if(d>8) throw 10;
        cin>>b;
        if(b<=0) throw 'a';
        if(b>=1000) throw 10.23;

        }
        catch(int a)
        {
            cout<<"large"<<endl;
        }
         catch(char a)
        {
            cout<<"-"<<endl;
        }
         catch(float a)
        {
            cout<<"big"<<endl;
        }
        v.push_back(s);
        vector<student> :: iterator  p=v.begin();
        while(p!=v.end())
        {
            it->display();
            it++;
        }
        try{
        char *a = new char[100000000000000];}
        catch(myexception &e)
        {
            cout<<e.what();
        }


    }
    return 0;
}
