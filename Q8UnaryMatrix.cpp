#include<iostream>
using namespace std;
class Matrix
{
    int arr[3][3];
    public:
        void set_matrix()
        {
            cout<<"Enter matrix Elemnets\n";
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    cin>>arr[i][j];
                }
            }
        }
        void display()
        {
            cout<<"\nmatrix Elemnets are\n";
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    cout<<arr[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        void operator-(void)
        {
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    arr[i][j]=-arr[i][j];
                }
            }
        }
};
int main()
{
    Matrix m1;
    m1.set_matrix();
    -m1;
    m1.display();
    return 0;
}