#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> v;
    int i;
    cout<<"size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;
    for(i=0;i<5;i++)
        v.push_back(i);
    cout<<"size : "<<v.size()<<endl;
     cout<<"capacity : "<<v.capacity()<<endl;
    for(i=0;i<5;i++)
     cout<<"content : "<<v[i]<<endl;
     for(i=0;i<5;i++)
        v.push_back(i+10);
      cout<<"size : "<<v.size()<<endl;
       cout<<"capacity : "<<v.capacity()<<endl;
       for(i=0;i<5;i++)
     cout<<"content : "<<v[i]<<endl;
     for(i=0;i<5;i++)
      v[i]=v[i]+v[i];
       cout<<"size : "<<v.size()<<endl;
        cout<<"capacity : "<<v.capacity()<<endl;
       for(i=0;i<5;i++)
     cout<<"content : "<<v[i]<<endl;
    return 0;
}
