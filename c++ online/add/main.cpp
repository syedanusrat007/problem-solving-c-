#include <iostream>
#include<cstring>

using namespace std;
class str
{
    int len;
    char *c;
public:
    str(string s)
    {
        len=s.len()+1;
        c=new char[len];
        int i;
        for(i=0;i<len;i++)
        c[i]=s[i];
        for(i=0;i<len;i++)
        cout<<c[i];
        cout<<"\n";
    }
    str addstr(const str &o)
    {
        char *temp;
        int l;
        l=len+o.len+2;
        temp=new char [l];
        strcpy(temp,o.c);
        strcat(temp,o.c);
    }
    friend void display(str t);

};
void display(str t)
{
    int i;
    for(i=0;i<t.len;i++)
    {
        cout<<t.c[i];
    }
}

int main()
{
    str s("alamgir");
    str st("is good");
    s.addstr(st);
    display(s);
    return 0;
}
