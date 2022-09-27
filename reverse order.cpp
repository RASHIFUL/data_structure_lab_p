#include <iostream>
 using namespace std;
 int main ()

  {
      int Array_1[ ] = {10,20,30,40,50};
      int Array_2 [ ] = {1,2,3,4,5,6,7,8};
      int  Arraysize[13];
      int i;
      int array_1=5;
      int array_2=8;

        for (i=0;i<array_1 ;i++)
        {
            Arraysize[i]=Array_1[i];
        }
       for (i=0;i<array_2;i++)
       {
           Arraysize[i+5]=Array_2[i];
       }
      for(i=12;i>=0;i--)
      {
          cout<<Arraysize[i]<< "        ";
      }
      return 0 ;
  }

