/*Define a class Complex with appropriate instance variables and member functions. 
Define following operators in the class:
a. +
b. -
c. *
d. ==*/
#include<iostream>
using namespace std;
class Complex
{
    int x,y;
    public:
    Complex()
    {

    }
    Complex(int a,int b)
    {
        x=a;y=b;
    }
    void print()
    {
        cout<<"a + bi = "<<x<<" + "<<y<<"i"<<endl;
    }
    Complex operator+(Complex p)
    {
        Complex temp;
        temp.x=x+p.x;
        temp.y=y+p.y;
        return temp;
    }
    Complex operator-(Complex q)
    {
        Complex temp;
        temp.x=x-q.x;
        temp.y=y-q.y;
        return temp;
    }
    Complex operator*(Complex r)
    {
        Complex temp;
        temp.x=x*r.x;
        temp.y=y*r.y;
        return temp;
    }
    bool operator==(Complex s)
    {
        if(x == s.x && y == s.y)
            return true;
        else
            return false;
    }
};

int main()
{
    Complex c1(2,6),c2(3,9),c3;
    c3=c1*c2;   
    c3.print();
    cout<<"compare c1 == c2 = "<<(c1==c2)<<endl;
    return 0;
}