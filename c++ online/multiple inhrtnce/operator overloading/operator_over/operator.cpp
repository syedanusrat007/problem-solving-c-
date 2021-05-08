#include <iostream>

using namespace std;
class coord{
 int x,y;
 public:
     coord(){
     x=0;y=0;
     }
     coord(int i,int j)
     {
         x=i; y=j;
     }
     void get_xy(int &i,int &j)
     {
         i=x;
         j=y;
     }
     coord operator +(coord obj);
     coord operator =(coord obj);
     int operator &&(coord obj);
     coord operator ++(int i);
     friend coord operator *(int i,coord obj);
     friend int operator ||(coord obj1 ,coord obj2);
      coord operator -();

};
coord coord :: operator +(coord obj)
{
    coord a;
    a.x=x+obj.x;
    a.y=y+obj.y;
    return a;
}
coord coord :: operator =(coord obj)
{

    x=obj.x;
    y=obj.y;
    return *this;
}
int coord :: operator &&(coord obj)
{

    return (x&&obj.x) && (y&&obj.y);
}
coord coord :: operator ++(int i)
{
    x++;
    y++;
    return *this;
}
 coord operator *(int i,coord obj)
{
    coord a;
    a.x=i*obj.x;
    a.y=i*obj.y;
    return a;
}
 int operator ||(coord obj,coord obj1)
{

    return obj.x||obj1.x && obj.y||obj1.y;
}
 coord coord :: operator -()
{

    x=-x;
    y= -y;
    return *this;
}
int main()
{
    coord o1(10,20),o2(30,40),o3(1,2),o4,o5(1,2);
    int x,y;
    o4=o1+o2;
    o4.get_xy(x,y);
    cout<<x<<"+"<<y<<endl;
    o1=o2;
     o1.get_xy(x,y);
    cout<<x<<"+"<<y<<endl;
    if(o1 && o2)
    {
        cout<<"same"<<endl;
    }
    else {
        cout<<"not"<<endl;
    }
    o3++;
    o3.get_xy(x,y);
    cout<<x<<"+"<<y<<endl;
    o4=2*o3;
    o4.get_xy(x,y);
    cout<<x<<"+"<<y<<endl;
     if(o1 || o3)
    {
        cout<<"not"<<endl;
    }
    else {
        cout<<"y"<<endl;
    }
    o5=-o5;
    o5.get_xy(x,y);
    cout<<x<<y<<endl;
    return 0;
}
