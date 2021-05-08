#include <iostream>
#include <string>

using namespace std;

 class base1{
   int a;
   public:
    base1(int x)
    {
        a=x;
    }
    int geta()
    {
        return a;
    }
 };
 class base2:public base1{
   int b;
   public:
    base2(int x,int y):base1(x)
    {
        b=y;
    }
    int getb()
    {
        return b;
    }
 };
 class base3:public base2{
   int c;
   string d;
   public:
    base3(int x,int y,int z,string w):base2(x,y)
    {
        c=z;
        d=w;
    }
    void show()
    {
        cout<<geta()<<" "<<getb()<<" "<<c<<" "<<d;
    }
 };

int main()
{
    int a,b,c;
    string d;
    getline(cin,d);
    cin>>a>>b>>c;
    base3 ob(a,b,c,d);
    ob.show();
    return 0;
}
