#include<iostream>
#include<vector>
#include<cstdio>
#include<cstring>
#include<exception>
using namespace std;
class myException: public exception
{
public:
    virtual const char* what() const throw(){
        return "Increase The RAM SIZE To Run The Programme";
    }
};
class student
{
    char *p;
    int id;
public:
    student(){
        p=NULL;
        id=0;
    }
    student(char s[],int i){
        p=new char[strlen(s)];
        strcpy(p,s);
        id=i;
    }
   void setvalue(char s[],int i){
        p=new char[strlen(s)];
        strcpy(p,s);
        id=i;
    }
    void display(){
        cout<<"Name : ";
        puts(p);
        cout<<"Roll Number: "<<id<<endl;
    }
};
int main()
{
    vector<student> v;
    for(int i=0;i<2;i++){
        student s;
        int id;
        char str[100];
        try{
            cout<<"Student Name : ";
            gets(str);
            int len=strlen(str);
            if(len>8){
                myException xx;
                throw xx;
            }
            cout<<"Roll Number : ";
            cin>>id;
            getchar();
            if(id<=0) throw 10;
            if(id>=1000) throw 'a';
        }
        catch (int a){
            cout<<"Roll Number Is Negetive"<<endl;
        }
        catch(char a){
            cout<<"Roll Number Is Too Large "<<endl;
        }
        catch(double a){
            cout<<"Name Is Too Large"<<endl;
        }
        catch(myException &x){
            cout<<x.what()<<endl;
        }
        s.setvalue(str,id);
        v.push_back(s);
    }
    vector<student> ::iterator it=v.begin();
    int number=1;
    cout<<v.size()<<endl;
    while(it!=v.end()){
        cout<<"Student "<<number++<<" Information "<<endl;
        it->display();
        it++;
        puts("");
    }
    return 0;
}
