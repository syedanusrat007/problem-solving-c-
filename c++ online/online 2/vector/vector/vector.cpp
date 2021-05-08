#include <iostream>

using namespace std;
class polygon{
protected :
    int wide,lenght;
public:
    polygon(int a,int b){
       wide = a;
       lenght=b;
    }
    virtual int area()=0;

};
class rectangle:public polygon{

public:
    rectangle(int a,int b) :polygon( a, b){

    }
   int area()
    {
       return wide*lenght;
    };
    void print()
    {
        cout<<wide*lenght<<endl;
    }


};
class triangle:public polygon{

public:
    triangle(int a,int b) :polygon( a, b){

    }
   int area()
    {
        return .5*wide*lenght;
    }
    void print()
    {
        cout<<.5*wide*lenght;
    }


};
int main()
{
    polygon *p1=new rectangle(5,4);
    polygon *p2=new triangle(5,4);
    rectangle r(5,4);
    r.print();
    triangle t(5,4);
    t.print();
    //delete p1;
    //delete p2;
    return 0;
}
