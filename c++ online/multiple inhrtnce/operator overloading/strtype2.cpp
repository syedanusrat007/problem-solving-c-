#include<iostream>
#include<cstring>
using namespace std;

class strtype{
    char s[100];
public:
   strtype()
    {
    s[0]='\0';
    cout<<"defaul constructor"<<endl;
    }
    strtype(char a[])
    {
        int i,len=strlen(a);
        for( i=0;i<len;i++)
        {
            s[i]=a[i];
        }
        s[i]='\0';
    }
    strtype operator+(strtype obj)
    {
        strtype temp;
        int l1=strlen(s),l2=strlen(obj.s);
        for(int i=0;i<l1;i++)
        {
                temp.s[i]=s[i];
        }
        for(int i=0;i<l2;i++)
        {
                temp.s[i+l1]=obj.s[i];
        }
        temp.s[l1+l2]='\0';
        return temp;
    }
    strtype operator=(strtype obj)
    {
        return strcpy(s,obj.s);
    }

    strtype operator++(int NOTUSED)
    {
            int len=strlen(s);

            for(int i=0;i<len;i++)
            {
                if(s[i]>='a' && s[i]<='z')
                    s[i]=s[i]-32;
            }

            return *this;
    }
     strtype operator--(int NOTUSED)
     {
         int len=strlen(s);

            for(int i=0;i<len;i++)
            {
                if(s[i]>='A' && s[i]<='Z')
                    s[i]=s[i]+32;
            }

            return *this;
     }

     string show()
    {
        return s;
    }
int operator>(strtype obj);
int operator<(strtype obj);
int operator==(strtype obj);
};
int strtype::operator==(strtype obj)
     {
         int l1=strlen(s);
         int l2=strlen(obj.s);
         return  (l1==l2);
     }
 int strtype::operator<(strtype obj)
     {
         return strlen(s)>strlen(obj.s);
     }

int strtype::operator>(strtype obj)
     {
         return strlen(s)<strlen(obj.s);
     }

int main()
{
    strtype ob1("bangladesh "),ob2(" country "),ob3,ob4,ob5("Abstruct");
    ob3=ob1+ob2;
    cout<<"After Concatenation: "<<ob3.show()<<"\n";
    ob4=ob2;
    if(ob1<ob2)
    cout<<ob1.show()<<" is greater than "<<ob2.show()<<" in length.\n";
    else if(ob1>ob2)
    cout<<ob1.show()<<" is smaller than "<<ob2.show()<<" in length.\n";
    if(ob2==ob4)
    cout<<"Both strings are equal in length.\n";
    ob5++;
    cout<<"Uppercase: "<<ob5.show()<<endl;
    ob5--;
    cout<<"Lowercase: "<<ob5.show()<<endl;
    return 0;

}

