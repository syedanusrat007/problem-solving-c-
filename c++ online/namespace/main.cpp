#include <iostream>

using namespace std;
 namespace first_namespace
 {
     void display()
     {
         cout<<"first_namespace"<<endl;
     }
 }
  namespace second_namespace
 {
     void display()
     {
         cout<<"second_namespace"<<endl;
     }
 }
 using namespace first_namespace;
int main()
{
    display();
    second_namespace ::display();
    return 0;
}
double *p,x;
 *p=x;

