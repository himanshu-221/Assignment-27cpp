/*Create a class CString to represent a string. 
 a) Overload the + operator to concatenate two strings.
 b) == to compare 2 strings.*/
 #include<iostream>
 #include<string.h>
 using namespace std;

class CString
{
    char str[20];
    public:
        void set_string()
        {
            cout<<"Enter string"<<endl;
            cin>>str;
        }
        void show()
        {
            cout<<str<<endl;
        }
        CString operator+(CString x)
        {
            CString s;
            strcpy(s.str,str);
            strcat(s.str,x.str);
            return s;
        }

        int operator==(CString &a);
};

int CString::operator==(CString &a)
{
    int temp=1;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!=a.str[i])
        {
            temp=0;
            break;
        }
    }
    return temp;
}
int main()
{
    CString str1,str2,str3;
    str1.set_string();
    str2.set_string();
    cout<<"\n concatenated string"<<endl;
    str3 = str1+str2;
    str3.show();
    int result = (str1==str2);
    if(result == 1)
    {
        cout<<"strings are equal"<<endl;
    }
    else{
        cout<<"Strings are not equal"<<endl;
    }
    return 0;
}