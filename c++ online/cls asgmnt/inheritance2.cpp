 #include<iostream>
#include<cstring>
#include<string.h>
using namespace std;

class myBase
{
    char str[80];
public:
    myBase(string s, int l)
    {
        int i;
        //l=s.length();
        for(i=0; i<l; i++)
            str[i]=s[i];
        str[i]='\0';
    }
    void print(int l)
    {
        int i;
        for(i=0; i<l; i++)
            cout<<str[i];
        cout<<endl;
    }
};

class myDerived: public myBase
{
    int len;
public:
    myDerived(string s):myBase(s, len=s.length())
    {
        //len=s.length();
    }
    void show()
    {
        print(len);
    }
};

int main()
{
    myDerived d("Hello");
    d.show();

    return 0;
}
