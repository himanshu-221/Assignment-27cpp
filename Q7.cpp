/*Overload the following operators as member or friend:
a) Unary ++ (pre and post both)
b) Overload as friend functions: operators << and >>*/
#include<iostream>
using namespace std;
class fraction
{
    private:
    long int num,deno;
    public:
        fraction(long int a=0,long int b=0)
        {
            num=a;deno=b;
        }
        friend istream& operator>>(istream &in,fraction &x)
        {
            cout<<"\nEnter numerator  : ";
            cin>>x.num;
            cout<<"\nEnter denominator  : ";
            cin>>x.deno;

        }

        friend ostream& operator<<(ostream &out,fraction &x)
        {
            cout<<x.num<<"/"<<x.deno<<endl;
            return out;
        }


        fraction operator++()
        {
            ++num;
            ++deno;
            return (*this);
        }
        fraction operator++(int x)
        {
            fraction old;
            old.num=num;
            old.deno=deno;
            num++;
            deno++;
            return old;
        }
};
int main()
{
    fraction F1,F2;
    cout<<"Enter 1st fraction number\n";
    cin>>F1;

    cout<<"\nF1++   : ";
    F1++;
    cout<<F1;
    cout<<"\n++F1   : ";
    ++F1;
    cout<<F1;

    cout<<"Enter 2nd fraction number\n";
    cin>>F2;

    F2 = ++F1;
    cout<<"\nF1 : ";
    cout<<F1;
    cout<<"\nF2 : ";
    cout<<F2;

    F2 = F1++;
    cout<<"\nF1 : ";
    cout<<F1;
    cout<<"\nF2 : ";
    cout<<F2;
    return 0;
}