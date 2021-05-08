#include <iostream>
using namespace std;
template <class T,class U>

T sum(T x, U y)
{
    return x+y;
}
template <class A>
void  swap1(A &x, A &y)
{
    A tmp;
    tmp=x;
    x=y;
    y=tmp;

}
template <class B>
class mycls{
 B o;
 public:
     mycls(B a):o(a){}
     B incr() { return o++ ;}
     };


template <>
class mycls<char>{
 char o;
 public:
     mycls(char a):o(a){}
     char  incr(){
     char tmp;
     if(o>='a' && o<='z')
        return o+='A'-'a';
     };

};
int main()
{
    int x=2,y=3;
    mycls<int> o(3);
    mycls<char> ob('a');
   cout<<sum<double>(2,3.6)<<endl;
   swap1<int>(x,y);
   cout<<x<<" "<<y<<endl;
   cout<<o.incr()<<endl;
   cout<<ob.incr();
    return 0;
}
