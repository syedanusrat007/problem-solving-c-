#include <iostream>>
#include <vector>

using namespace std;

vector <int> shams;

int main()
{
    int n, i=0;
    do
    {
        cin>>n;
        shams.push_back(n);
    }while(n!=-1);
    cout<<"size "<<shams.size()<<endl;

    while(i<shams.size()-1)
    {

        cout<<" vector "<<shams.at(i);
        i++;
    }
}
