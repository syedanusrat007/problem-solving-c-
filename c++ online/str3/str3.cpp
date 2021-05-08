#include <iostream>
#include <cstring>

using namespace std;

class str{
   char *p;
   int sz;

   public :
       str(string s)
       {
           int i;
           sz=s.length();
           p=new char[sz];
           for(i=0;i<sz;i++)
           {
               p[i]=s[i];
           }
       }
       str(const str& sp)
       {
            sz=sp.sz;
            p=sp.p;
       }

       void addstr(str s1)
       {
            int final_size = sz+s1.sz;

            char ch[final_size];
            for(int i=0;i<sz;i++)
            {
                ch[i]=p[i];
            }
            for(int i=sz;i<final_size;i++)
            {
                ch[i]=s1.p[i-sz];
            }

            p=new char[final_size];

            for(int i=0;i<final_size;i++)
            {
                p[i]=ch[i];
            }
            sz=final_size;
       }

       friend void display (str s);
};

void display (str s)
{
    int i;
    for(i=0;i<s.sz;i++)
    {
        cout<<s.p[i];
    }
    cout<<endl;
}


int main()
{
    str name("Alamgir ");
    display(name);

    str name1("is good!");
    name.addstr(name1);

    display(name);

    return 0;
}
