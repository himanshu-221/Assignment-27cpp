/*Write a C++ program to overload unary operators that is increment and decrement.*/
#include<iostream>
using namespace std;
class Num
{
    int x;
    public:
        void setNum(int a)
        {
            x=a;
        } 
        void show()
        {
            cout<<"value of x is = "<<x<<endl;
        }

        void operator++(void)
        {
            x=++x;
        }

        void operator--(void)
        {
            x=--x;
        }


};
int main()
{
    cout<<"enter a value of x"<<endl;
    int n;
    cin>>n;
    Num n1;
    n1.setNum(n);
    n1.operator++();
    n1.show();
    return 0;
}