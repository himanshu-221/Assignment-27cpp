/*Overload the operator unary minus (-) to negate the numbers.*/
#include<iostream>
using namespace std;
class Numbers
{
    int x,y,z;
    public:
    void setter(int a,int b,int c)
    {
        x=a;y=b;z=c;
    }
    void show()
    {
        cout<<"Numbers are : "<<x<<" , "<<y<<" , "<<z<<endl;
    }
    void operator-(void)
    {
        x=-x;y=-y;z=-z;
    }
};
int main()
{
    Numbers num;
    int a,b,c;
    cout<<"Enter Three numbers:-"<<endl;
    cin>>a>>b>>c;
    num.setter(a,b,c);
    num.show();
    cout<<endl;
    -num;
    num.show();
    return 0;
}