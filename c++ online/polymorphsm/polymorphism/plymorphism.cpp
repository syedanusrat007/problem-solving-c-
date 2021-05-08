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
    void print_area()
    {
        cout<<"AREA : "<<this->area()<<endl;
    }
};
class rectangle:public polygon{

public:
    rectangle(int a,int b) :polygon( a, b){

    }
   int area()
    {
        return wide*lenght;
    };

};
class triangle:public polygon{

public:
    triangle(int a,int b) :polygon( a, b){

    }
   int area()
    {
        return .5*wide*lenght;
    };

};
int main()
{
    polygon *p1=new rectangle(5,4);
    polygon *p2=new triangle(5,4);
    p1->print_area();
    p2->print_area();
    delete p1;
    delete p2;
    return 0;
}
