#include <iostream>

using namespace std;
 class shape {
     protected:
  int wide,lenth;
 protected:
     shape(int w,int l)
     {
         wide=w;
         lenth=l;
          cout<<"shape constructor"<<endl;

     }
     ~shape()
     {
         cout<<"shape destructor"<<endl;
     }
 };
 class rectangle : public shape
 {
     int a;
     public:
     rectangle(int i,int j):shape(i,j)
     {
        cout<<"rectangle constructor "<<endl;
     }
     void area ()
     {
         a=wide*lenth;
         cout<<"area of rectangle : "<<a<<endl;
     }
     ~rectangle()     {
          cout<<"rectangle destructor "<<endl;
     }
 };
 class squre : public shape
 {
     int a;
     public:
     squre(int i,int j):shape(i,j)
     {
        cout<<"squre constructor"<<endl;
     }
     void area ()
     {
         a=lenth*lenth;
         cout<<"area of squre : "<<a<<endl;
     }
     ~squre()     {
          cout<<"squre destructor"<<endl;
     }
 };
 class circle : public shape
 {
     float a;
     public:
     circle(int i):shape(i,0)
     {
        cout<<"circle constructor"<<endl;
     }
     void area ()
     {
         a=3.14*wide*wide;
         cout<<"area of circle : "<<a<<endl;
     }
     ~circle()     {
          cout<<"circle destructor"<<endl;
     }
 };
int main()
{
    rectangle r(2,3);
    r.area();
    squre s(3,3);
    s.area();
    circle c(1);
    c.area();

    return 0;
}
