#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> v;
    vector <int> ::iterator p;
    int i;
    cout<<"size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;
    for(i=0;i<5;i++)
        v.push_back(i);
    cout<<"size : "<<v.size()<<endl;
     cout<<"capacity : "<<v.capacity()<<endl;
     for(p=v.begin();p!=v.end();p++)
     {
         cout<<*p<<" " ;
     }

    return 0;
}

