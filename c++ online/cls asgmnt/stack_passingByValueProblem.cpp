#include <iostream>
using namespace std;
class Stack{
   int top; char* arr;int sz;
   public:
      Stack() { // default constructor
         top=-1;
         arr= new char[10];
         sz=10;
      }
      Stack (const Stack& s){
        top=-1;this->sz=s.sz;
        arr= new char[sz];
        cout<<"Copy Constructor called!"<<endl;
      }
      Stack( int s) {
         top=-1;sz=s;
         arr= new char[s];
         cout<<"Constructor called!"<<endl;
      }
      ~Stack(){
        delete[] arr;
         cout<<"Destructor called!"<<endl;
      }
      void push(char c){
        if (top < (sz-1) ){
            top++;
            arr[top]=c;
            cout<<"The stack now has "<<top+1<<" elements."<<endl;
        }
        else {cout<<"Stack is full!!!!!!!";}
      }
      void pop(){
        if (top >= 0){
            //char temp = arr[top];
            cout<<"element is :"<<arr[top]<<endl;
            top--;
            cout<<"The stack now has "<<top+1<<" elements."<<endl;
        } else {cout<<"Stack is empty!!!!!!";}
        }
        friend void display(Stack s);
};
 void display (Stack s){
        cout<<"Stack looks like this : "<<s.top<<endl;
        for (int i=s.top; i>=0;i--)
            cout<<s.arr[i]<<endl;
        cout<<"*****************"<<endl;
        cin.get();
        }
int main(){
   int num=10, choice=0;
   char elem;
   cout<<"Enter size of stack : ";
   cin>>num;
   Stack st = Stack(num);

   cout<<"Stack of "<<num<<" elements has been created. Operation :-"<<endl;
   cout<<"1 : Push"<<endl;
   cout<<"2 : Pop"<<endl;
   cout<<"3 : Display"<<endl;
   cout<<"4 : Quit"<<endl;
  while(1)  {
   cout<<"Enter choice :";
   cin>>choice;
   if (choice == 1){
    cout<<"Enter element to push:";
    cin>>elem;
    st.push(elem);
   } else if (choice == 2){
       st.pop();
       }
     else if (choice == 3)
        display(st);
     else if (choice == 4)
        break;
  }
   return 0;
}
