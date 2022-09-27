#include <iostream>
using namespace std;
int main()
{
    int A[ 9]={0,1,2,3,4,5,6,7,8};
    int B[ 6]={3,4,5,6,12,13};
    int C[15];
    int i , j, n;

       for (i=0;i<9;i++)

       {
           for (j=0;j<5;j++)
           {
               if (A[i]==B[j])
               {
                  C[i]=A[i];
                  cout<<C[i]<<"       ";
                  n=1;
               }

           }
       }

    if (n!=1)
    {
        cout<<"no common element !"<<endl;
    }

return 0;

}
