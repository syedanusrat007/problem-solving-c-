#include<iostream>
#include<string>
#define Pi 3.1416
using namespace std;

class Geometry
{
    char *name;
    int dim1, dim2;
public:
    Geometry()
    {
        name=new char;
        dim1=0;
        dim2=0;
        name="NULL";
    }
    Geometry(char *name, int x, int y=0)
    {
        this->name=name;
        dim1=x;
        dim2=y;
    }
    ~Geometry( )
    {
        delete[] name;
        delete[] &dim1;
        delete[] &dim2;
    }


    friend void Display(Geometry shp);

};

void Display(Geometry shp)
    {
        cout<<endl<<endl<<"Shape Name: "<<shp.name<<endl;
        if(shp.dim2==0)
        {
            if(shp.name[0]=='C')
            {
                cout<<"Radius : "<<shp.dim1<<endl;
                cout<<"Area of "<<shp.name<<" : "<<Pi*(float)shp.dim1*(float)shp.dim1<<endl;
                cout<<"Perimeter of "<<shp.name<<" : "<<2*Pi*(float)shp.dim1<<endl;
            }
            else
            {
                cout<<"length : "<<shp.dim1<<endl;
                cout<<"Area of "<<shp.name<<" : "<<shp.dim1*shp.dim1<<endl;
                cout<<"Perimeter of "<<shp.name<<" : "<<4*shp.dim1<<endl;
            }
        }
        else
        {
            cout<<"Length of "<<shp.name<<" : " <<shp.dim1<<endl;
            cout<<"Height of "<<shp.name<<" : " <<shp.dim2<<endl;
            cout<<"Area of "<<shp.name<<" : "<<shp.dim1*shp.dim2<<endl;
            cout<<"Perimeter of "<<shp.name<<" : "<<((2*shp.dim1)+(2*shp.dim2))<<endl;
        }


    }

    int main()
    {
        Geometry sp1("Square", 5);
        Display(sp1);

        Geometry sp2("Rectangular", 7, 8);
        Display(sp2);


        Geometry sp3("Circle", 6);
        Display(sp3);



        return 0;
    }
