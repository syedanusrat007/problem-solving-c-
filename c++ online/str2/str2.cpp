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
           p=new char [sz];
           for(i=0;i<sz;i++)
           {
               p[i]=s[i];
           }
       }
       str (const str& sp)
       {
           sz=sp.sz;
           p=new char [sz];
           int i;
          for(i=0;i<sz;i++)
           {
               p[i]=sp.p[i];
           }
       }
       void   addstr( str &s1)
       {
           int i,j,k;
           char *temp;
           i=strlen("alamgir ")+strlen("is good!");
           temp = new char[i];
           strcpy(temp,p);
           for(j=sz,k=0;j<i;j++,k++)
           {
               temp[j]=s1.p[k];//"is good" string copy hocche..
           }
          // strcpy(temp,s1.p);
           temp[i]='\0';

         p=temp;
         sz=i+1;
       }
       ~str()
       {
           delete [] p;
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

}
int main()
{
    str name ("Alamgir ");
    //display(name);
    str name1("is good!");
    name.addstr(name1);
    display(name);

    return 0;
}
