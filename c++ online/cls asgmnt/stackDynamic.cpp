#include <iostream>
using namespace std;
class Stack{
   int top; char* arr;
   int sz;
   public:
      Stack() { // default constructor
         //cout << "Initializing stack!" <<endl;
         top=-1;
         arr= new char[10];
         sz=10;
      }
      Stack( int s) {
         //cout << "Initializing stack!" <<endl;
         top=-1;
         arr= new char[s];
         sz=s;
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

};

int main(){
   int num=10, choice=0;
   char elem;
   cout<<"Enter size of stack : ";
   cin>>num;
   Stack st = Stack(num);

   cout<<"Stack of "<<num<<" elements has been created. Operation :-"<<endl;
   cout<<"1 : Push"<<endl;
   cout<<"2 : Pop"<<endl;
  while(1)  {
   cout<<"Enter choice :";
   cin>>choice;
   if (choice == 1){
    cout<<"Enter element to push:";
    cin>>elem;
    st.push(elem);
   } else { st.pop();}
  }
    return 0;
}
