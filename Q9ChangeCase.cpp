/*Overload operator “!” to reverse the case of each alphabet in the string (Uppercase to 
Lowercase and vice versa).*/
#include<iostream>
#include<string.h>
using namespace std;
class mystring
{
    char str[100];
    public:
        void set_string()
        {
            cout<<"Enter string\n";
            cin>>str;
        }
        void operator!()
        {
            for(int i=0;str[i]!='\0';i++)
            {
                if(str[i]>=65 && str[i]<=90)
                {
                    str[i]+=32;
                }
                else if(str[i]>=97 && str[i]<=122)
                {
                    str[i]-=32;
                }
            }
        }
        void show()
        {
            cout<<str<<endl;
        }
};
int main()
{
    mystring m;
    m.set_string();
    !m;
    cout<<"\nString in lower case\n";
    m.show();

    return 0;
}