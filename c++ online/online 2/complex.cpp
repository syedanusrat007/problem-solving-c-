#include<iostream>
using namespace std;

template<class T>
class cmplx
{
    T real, imag;
public:
    cmplx()
    {
        real = 0;
        imag = 0;
    }
    ~cmplx()
    {

    }
    cmplx(T a, T b)
    {
        real = a;
        imag = b;
    }
    void setvalue()
    {
        cout<<"Enter Real part: ";
        cin>>real;
        cout<<endl<<"Enter Imaginary part: ";
        cin>>imag;
        cout<<endl;
    }

    void display()
    {
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
    cmplx operator +(cmplx a)
    {
        cmplx w;
        this->real = a.real + this->real;
        this->imag = a.imag + this->imag;
        return w;
    }
    cmplx operator -(cmplx a)
    {
        cmplx w;
        this->real = this->real - a.real;
        this->imag = this->imag - a.imag;
        return w;
    }
    cmplx add(T x, T y)
    {
        T z;
        z.real = x.real + y.real;
        z.imag = x.imag + y.imag;
        return z;
    }
    cmplx sub(T x, T y)
    {
        T z;
        z.real = x.real - y.real;
        z.imag = x.imag - y.imag;
        return z;
    }
};

int main()
{
    cmplx <int> i1(8, 5), i2(5, 3);
    cmplx <double> d1(3.9, 9.2), d2(2.2, 8.9);
    //i1.setvalue();
    //i2.setvalue();
    i1 + i2;
    i1.display();
    i1 - i2;
    i1.display();
    //d1.setvalue();
    //d2.setvalue();
    d1 + d2;
    d1.display();
    d1 - d2;
    d1.display();
    //i3.display();
}
