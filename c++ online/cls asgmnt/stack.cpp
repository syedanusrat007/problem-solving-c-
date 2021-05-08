#include<iostream>
using namespace std;


class Student
{
    //int top;
    char* stk;


public:
    int s;
    int top;
    Student()
    {
        top=0;
        cout<<"Constructor Has been called!!!!"<<endl<<endl;;
    }
    ~Student()
    {
        cout<<"Destructor has been called!!!!"<<endl;
        delete[] stk;
    }

    void push(int s, char a);
    void pop();
    void display();
};

void Student::push (int s, char a)
{
    if(top==s)
    {
        cout<<"Stack is full !!!!!!!!"<<endl<<endl;
        return;
    }
    stk[top]=a;
    top++;

}
void Student::pop()
{
    if(top==0)
    {
        cout<<"Stack is empty!!!!!!"<<endl<<endl;;
        return;
    }
    else
    {
        top--;
        cout<<"Popped Element : "<<stk[top]<<endl<<endl;
    }
}
void Student::display()
{
    int i;
    for(i=top-1; i>=0; i--)
    {
        cout<<stk[i]<<endl;
    }
}

//Student::~Student();

int main()
{
    int s, i, c;

    Student s1;
    s1.top=70;
    cout<<"Enter The size of Stack"<<endl;
    cin>>s;
    char *stk= new char[s];

    char x;
    do
    {
        cout<<"Enter your choice:"<<endl;
        cout<<"1. Push element"<<endl<<"2. Pop element"<<endl<<"3. Exit"<<endl;
        cin>>c;
        switch(c)
        {
        case 1:
            cout<<"Enter element: ";
            cin>>x;
            s1.push(s,x);
            s1.display();
            break;
        case 2:
            s1.pop();
            s1.display();
            break;
        case 3:
            break;

        }
    }while(c!=3);

    return 0;

}
