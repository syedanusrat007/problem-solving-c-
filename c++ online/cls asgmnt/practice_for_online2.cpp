#include<iostream>


using namespace std;
/*
int max(int *p, int x)
{
    int maxnum=0, ret=0;

    for(int i=0; i<x; i++)
    {
        if(p[i]>maxnum)
            {
                ret=i;
                maxnum=p[i];
            }

    }
    return ret;
}

int main()
{
    int s;
    cin>> s;
    int a[10], i, *ptr, m;
    for(i=0; i<s; i++)
    {
        cin>>a[i];
    }

    ptr=a;
    m=max(ptr, s);
    cout<<"Max ate by : "<<m+1<<" he ate "<<a[m];
    return 0;
}
*/
/*
#include<string>

int main()
{
    string fn, ln;
    getline(cin, fn);
    getline(cin, ln);
    fn.append(ln);
    cout<<fn;
    return 0;

}*/
#include<cstdlib>
#include<ctime>
int main()
{
    unsigned seed=time(NULL);
    srand(seed);
    int min=1, max=100,guess;
    int range=max-min+1;

    do
    {
        int ran=rand()/100%range+min;
        cout<<"Enter a number to guess random number : ";
        cin>>guess;
        if(guess>ran+50)
            cout<<"TOO HIGH. random number is: "<<ran<<endl;
        else if(guess<ran-50)
            cout<<"TOO LOW. random number is: "<<ran<<endl;
        else if (guess==ran)
            cout<<"BINGOO !!!! You hit the bull :). random number is: "<<ran<<endl;
        else
            cout<<"Closer, Try again!!! "<<ran<<endl;

        cout<<"Press 'e' to Exit or  Enter to continue ....";
        cin.get();
    }while(cin.get()!='e');

    return 0;
}
