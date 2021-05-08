#include <bits/stdc++.h>
using namespace std;

class cmplx{
    //private:
        int real, img;
    public:
        cmplx(){
            real = 0; img = 0;
        }
        void setvalue(){
            cout << "Enter real portion: ";
            cin >> real;
            cout << "Enter imaginary portion: ";
            cin >> img;
        }
        friend cmplx add(cmplx a, cmplx b);
        void sub(cmplx x){
            real -= x.real;
            img -= x.img;
        }
        void display(){
            cout << real << " + (" << img << ")i" << endl;
        }
};

cmplx add(cmplx a, cmplx b){
        cmplx x;
        x.real = a.real + b.real;
        x.img = a.img + b.img;
        return x;
    }

int main()
{
    cmplx a, b, c;
    a.setvalue();
    b.setvalue();
    c = add(a, b);
    c.display();
    a.sub(b);
    a.display();

    cmplx *p;         //declaring a cmplx type pointer
    p = &c;           //Now p is pointing at object c
    p -> sub(b);      //we can use pointer p to access member functions and variables. this is same as c.sub(b)
    p -> display();   //same as c.display()
    return 0;
}
