#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str="Welcome world to the world of c++";

    cout<<str<<endl;
    /// 1. we can use >>> find() <<<< to know about the first occurrence of a substring from another string
    cout<<"searching for a substring . calling find (\"world\"): "
    <<str.find("world")<<endl;

    /// 2. we can use >>>> length() or size()  <<<< to get the length of a string
    cout<<"Length of the string calling length(): "<<str.length()<<endl;
    cout<<"Length of the string calling size(): "<<str.size()<<endl;

    /// 3. we can use >>>> substr() <<<< to obtain substring that starts and ends at a predefined place in main string
    cout<<"Substring found?? calling substr(7, 20): "<<str.substr(7, 20)<<endl;
    cout<<"Calling substr(3) : "<<str.substr(3)<<endl;

    /// 4. we can use >>>> append() <<<< to add a string at the end of an existing string
    cout<<"Appending (\"string\") : "<<str.append(" String.")<<endl;

    /// 5. we can use >>>> insert() <<<< to insert a string into another string at specified location
    cout<<"Inserting (\"first and functional\") : "<<str.insert(15,"first and functional")<<endl;

    return 0;

}
