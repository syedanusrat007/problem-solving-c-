#include<iostream>
#include<string>

#define SIZE 100
using namespace std;

class Strtype
{
    char s[SIZE];
public:
    Strtype()
    {
        ;
    }
    Strtype(string s1)
    {
        int i=0;

        while(s1[i]!='\0')
        {
            s[i]=s1[i];
            i++;
        }
        s[i]='\0';
    }

    void show()
    {
        cout<<s;
        //return s;

    }

    Strtype operator+(Strtype obj)
    {
        Strtype temp;
        int i=0,j=0;

        while(s[i]!='\0')
            {
                temp.s[i]=s[i];
                i++;
            }
        temp.s[i]=' ';
        i++;
        while(obj.s[j]!='\0')
            {

              temp.s[i]=obj.s[j];
               j++;
               i++;
           }
        temp.s[i]='\0';


       return temp;

    }

    Strtype operator= (Strtype obj)
    {
        int i=0;
        while(obj.s[i]!='\0')
        {
            s[i]=obj.s[i];
            i++;
        }
        s[i]='\0';
        return *this;

    }

    int operator<(Strtype o2)
    {
        int l1=0, l2=0;
        while(s[l1]!='\0')
            l1++;
        while(o2.s[l2]!='\0')
            l2++;

    return l1<l2;

    }
    int operator>(Strtype o2)
    {
        int l1=0, l2=0;
        while(s[l1]!='\0')
            l1++;
        while(o2.s[l2]!='\0')
            l2++;



    return l1>l2;

    }
    int operator==(Strtype o2)
    {
        int l1=0, l2=0;
        while(s[l1]!='\0')
            l1++;
        while(o2.s[l2]!='\0')
            l2++;



    return l1==l2;

    }
    Strtype operator ++(int n)
    {
        int i=0;
        while(s[i]!='\0')
        {
            if(s[i]>='a'&&s[i]<='z')
                s[i]=s[i]-32;
            i++;
        }

        return *this;
    }
    Strtype operator --(int n)
    {
        int i=0;
        while(s[i]!='\0')
        {
            if(s[i]>='A'&&s[i]<='Z')
                s[i]=s[i]+32;
            i++;
        }
        return *this;
    }
    ~Strtype()
    {

    }


};

int main()
{
    Strtype ob1("bangladesh"), ob2("country"), ob3, ob4, ob5("Abstract");


    ob3=ob1+ob2;
    ob3.show();
    cout<<endl;
    ob4=ob2;


   if(ob1<ob2)
        {ob2.show();cout<<" is Greater than ";ob1.show();cout<<" in length "<<endl;}
    else if (ob1>ob2)
        {ob1.show();cout<<" is Greater than ";ob2.show();cout<<" in length "<<endl;}
    if(ob2==ob4)
        cout<<" Both strings are equal in length"<<endl;
    ob5++;
    ob5.show();
    cout<<endl;
    ob5--;
    ob5.show();
    return 0;
}
