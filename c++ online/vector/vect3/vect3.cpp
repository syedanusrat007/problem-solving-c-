#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> v(5,1);
    unsigned int i;
    cout<<"size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;
    for(i=0;i<v.size();i++)
      cout<<v[i]<<endl;
   vector<int> ::iterator p=v.begin();
   p+=2;
   v.insert(p,10,9);
   cout<<"size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;
    for(i=0;i<v.size();i++)
      cout<<v[i]<<endl;
      p=v.begin();
       p+=2;
   v.erase(p,p+10);
   cout<<"size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;
    for(i=0;i<v.size();i++)
      cout<<v[i]<<endl;



    return 0;
}

