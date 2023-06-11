/*Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator overloading).*/
#include<iostream>
using namespace std;
class Matrix
{
    int arr[3][3];
    public:
        void setter()
        {
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    cin>>arr[i][j];
                }
            }
        }
        void show()
        {
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    cout<<arr[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        friend Matrix operator+(Matrix a,Matrix b)
        {
            Matrix temp;
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    temp.arr[i][j] = a.arr[i][j] + b.arr[i][j];
                }
            }
            return temp;
        }
};

int main()
{
    Matrix m1,m2,m3;
    cout<<"Enter elements for 1st Matrix \n";
    m1.setter();
    cout<<"Enter elements for 2nd Matrix \n";
    m2.setter();
    m3=m1+m2;
    cout<<"elements of M3 matrix \n";
    m3.show();
}