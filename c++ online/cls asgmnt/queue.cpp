#include<iostream>
using namespace std;


class Student
{
    int f,r;
    char* que;


public:
    int s;
    Student()
    {
        f=0;
        r=0;
        cout<<"Constructor Has been called!!!!"<<endl<<endl;;
    }
    ~Student()
    {
        cout<<"Destructor has been called!!!!"<<endl;
        delete[] que;
    }

    void push(int s, char a);
    void pop(int s);
    void display(int s);
};

void Student::push (int s, char a)
{
    int x;
    if(s==(f+r))
    {
        cout<<"Queue is full !!!!!!!!"<<endl<<endl;
        return;
    }

    que[r++%s]=a;

}
void Student::pop(int s)
{
    if(f==r||que[f+1]=='\0')
    {
        cout<<"Queue is empty!!!!!!"<<endl<<endl;;
        return;
    }
    else
    {
        cout<<"Deququed Element : "<<que[f]<<endl<<endl;
        f=f++%s;
        display(s);
    }
}
void Student::display(int s)
{
    int i;
    for(i=f; i!=r; i++%s)
    {
        cout<<que[i]<<endl;
    }
}

Student::~Student();

int main()
{
    int s, i, c;
    Student s1;
    cout<<"Enter The size of Queue"<<endl;
    cin>>s;
    char *que= new char[s];

    char x;
    do
    {
        cout<<"Enter your choice:"<<endl;
        cout<<"1. Enqueue element"<<endl<<"2. Dequeue element"<<endl<<"3. Exit"<<endl;
        cin>>c;
        switch(c)
        {
        case 1:
            cout<<"Enter element to be enqueued: ";
            cin>>x;
            s1.push(s,x);
            s1.display(s);
            break;
        case 2:
            s1.pop(s);
            break;
        case 3:
            break;

        }
    }while(c!=3);

    return 0;

}

