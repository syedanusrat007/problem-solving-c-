#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Shape{
protected:
    int length, width;
public:
    Shape(int l, int w){length=l; width=w;}
    virtual int area() {};
    void print(){
        cout<< "The area of the figure is : "<<this->area()<<endl;
    }
};
class Rect : public Shape{
public:
    Rect(int x, int y): Shape(x,y){}
    int area(){ return length * width; }
};
class Triangle : public Shape{
public:
    Triangle (int x, int y): Shape(x,y){}
    int area(){ return length * width / 2; }
};
int main(){
    Rect r1(3,2);
    r1.area();
    Triangle t1(3,2);
    t1.area();
    int choice;
    cout<< "1. Rectangle"<<endl;
    cout<< "2. Triangle"<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;
    Shape* ptrShp1;
    if(choice ==1){
        ptrShp1= new Rect(5,4);
    } else
        ptrShp1 = new Triangle(3,2);

    ptrShp1->print();
    return 0;
}
