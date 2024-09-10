//operator overloading
#include<iostream>
using namespace std;
class Complex
{
    private: 
    int real, imag;
    public:
    Complex(int r=0, int i=0)
    {
        real = r;
        imag = i;
    }
    //this is automatically called when '+' is used between two complex objects
    public:
    Complex operator+(Complex const& obj)
    {
        Complex res;
        res.real=real+obj.real;
        res.imag=imag+obj.imag;
        return res;
    }
    public:
    void print()
    {
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
};

int main()
{
    Complex c1(10, 5), c2(2,4);
    Complex c3=c1+c2;
    c1.print();
    c2.print();
    cout<<"Sum is: ";
    c3.print();
}




/*output
10 + 5i
2 + 4i
Sum is: 12 + 9i

