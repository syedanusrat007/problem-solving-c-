#include<iostream>
#include<vector>
using namespace std;

class Student
{
    int id;
    char *name;
public:
    Student()
    {
        name=NULL;
        id=0;
    }
    void SetValue(char *p, int i)
    {
        name=p;
        id=i;
    }
    void show()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Id : "<<id<<endl;
    }
};


vector <Student> T;

int main()
{

    int i, ch,id;

    Student s1;
    while(1)
    {
        cout<<"CHOICE : ";
        cin>>ch;
        if(ch==1)
        {
            char *n=new char;

            try{

                cout<<"enter Name: ";
            cin>>n;
            cout<<*(n+10)<<endl;
            if(*(n+10)>='a' && *(n+10)<='z')
                throw 'a';
            cout<< "Enter ID: ";
            cin>>id;
            if(id<0 || id>100)
                throw 1;

            s1.SetValue(n, id);
            T.push_back(s1);
            }
            catch(int i)
            {
                cout<<"Insert a validd ID"<<endl;
            }
            catch(char a)
            {
                cout<<"Name cannot be too long!!!"<<endl;
            }
        }
        if(ch==2)
        {
            vector<Student>::iterator it=T.begin();
            while( it != T.end()) {
           // cout << "value of v = " << *v << endl;
                    it->show();
                    it++;
                    }

        }
        if(ch==0)
            break;

    }
    return 0;
}
