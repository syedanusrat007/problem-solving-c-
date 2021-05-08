#include<iostream>
#include<cstring>
using namespace std;
class boss
{
    int sz;
    char *p;
public:
    boss(string s)
    {
        sz=strlen(s);
        cout<<"\n"<<sz;
        p=new char [sz];
        int i;
        for(i=0;i<sz;i++)
        {
            p[i]=s[i];
        }
        p[i]='\0';
    }
    void addstr(str &s1)
    {
        int l;
        char *temp;
        l=strlen("alamgir")+strlen("is good");
        temp=new char[l];
        strcpy(temp,p);
        int i,j,k;
        for(i=sz+1,k=0;i<l;i++,k++)
        {
            temp[i]=s1.p[k];
        }
        temp[i]='\0';
        p=temp;
        sz=l+1;
    }
    friend void display(str s);
};
void display(str s)
{
    int i;
    for(i=0;i<sz;i++)
    {
        cout<<s.p[i];
    }
}
int naim()
{
    str s("alamgir");
    str s1("is good");
    s.addstr(s1);
    display(s);
    return 0;

}

};
