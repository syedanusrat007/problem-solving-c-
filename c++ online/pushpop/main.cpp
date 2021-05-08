#include <iostream>

using namespace std;
class Stack
{ char* arr;int sz,top;
   public:
    Stack()
    {
        cout<<"defult constructor"<<endl;
    }
     Stack( int s)
     {
         top=-1;
         sz=s;
         arr=new char[s];
     }
     void push(char c){
        if(top<(sz-1))
        {
            top++;
            arr[top]=c;
            cout<<"array has now"<<top+1<<"elemnts"<<endl;
        }
        else{
            cout<<"Stack full!!!"<<endl;
        }
     }
     int pop()
     {
         if(top==-1)
         {

             cout<<"Stack empty!!!"<<endl;
             return 1;
         }
         else
         {
             top=top-1;
             return arr[top];
           cout<<"array has now"<< top+1 <<"elemnts"<<endl;
         }
     }
     void display()
     {
         int i;
         cout<<"stack :"<<endl;
         for(i=0;i<=top;i++){
            cout<<arr[i]<<endl;
         }
     }

};

int main()
{

    int num,num1;
    cin>>num;
    Stack s= Stack (num);
    int i;
    char j;

    for(i=0;i<num;i++)
    {
        cin>>j;
        s.push(j);
    }
    s.display();
    cout<<"how many time pop?"<<endl;
    cin>>num1;
    for(i=0;i<num1;i++)
    s.pop();
    s.display();
   return 0;
}
