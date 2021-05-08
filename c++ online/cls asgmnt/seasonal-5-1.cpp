#include<iostream>
#include<cstring>
using namespace std;

class Str
{
    char *p;

    Str()
    {
        cout<<"Constructor called!!";
    }
    ~Str()
    {
        cout<<"Destructor Called!!!!"<<endl;
    }
    friend void display(Str b);

};

void display(Str b)
{
    cout<<"Given String: "<<p<<endl;
}

int main()
{
    Str s1;
    string c;
    cout<<"enter string:";
    cin>>c;
    getch();
    while(getch()==1)
    {
        s1.display(c);
        getch();
    }
    return 0;

}
