/*Write a C++ program to add two complex numbers using operator overloaded by a friend 
function.*/
#include<iostream>
using namespace std;
class Complex
{
    private:
    int a,b;
    public:
    void seter(int x,int y)
    {
        a=x;b=y;
    }
    void show()
    {
        cout<<"Addition is = "<<a<<" + "<<b<<"i";
    }
    friend Complex add(Complex a,Complex b)
    {
        Complex temp;
        temp.a = a.a + b.a;
        temp.b = a.b + b.b;
        return temp;
    }
};

int main()
{
    Complex c1,c2,c3;
    c1.seter(2,3);
    c2.seter(9,0);
    c3=add(c1,c2);
    c3.show();
    return 0;
}