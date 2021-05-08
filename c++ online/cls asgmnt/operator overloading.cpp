#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

class coord
{
    int x, y;
    char *p;
public:
    coord()
    {
        x=y=0;
    }
    coord(int i, int j)
    {
        x=i;
        y=j;
    }
    void show()
    {
        cout<<"x "<<x<<endl<<"y "<<y<<endl;
    }

    coord operator +(coord ob)
    {
        coord temp;
        temp.x=x+ob.x;
        temp.y=y+ob.y;
        return temp;
    }
    coord operator -(coord ob)
    {
        coord temp;
        temp.x=x-ob.x;
        temp.y=y-ob.y;
        return temp;
    }
};

int main()
{
    coord obj1(10, 20), obj2(15, 35), obj3;
    cout<<"coord obj1(10, 20), obj2(15, 35), obj3;"<<endl;
    obj3=obj1;
    cout<<"obj3=obj1"<<endl<<"obj3.show()"<<endl;
    obj3.show();
    cout<<"obj3=obj1+obj2;"<<endl<<"obj3.show()"<<endl;
    obj3=obj1+obj2;
    obj3.show();s
    cout<<"obj1=obj3-obj2;"<<endl<<"obj1.show()"<<endl;
    obj1=obj3-obj2;
    obj1.show();





    return 0;
}
