#include <iostream>
using namespace std;


int main()
{
    int i , j;
    int array1[] = {1,4,6,3,6,9,1,};
    int arraysize = 7;


    cout <<"unique   array: ";
    for (int i=0; i< arraysize; i++)
    {
        for (j=0; j<i; j++)
           if (array1[i] == array1[j])
               break;
         if (i == j)
          cout << array1[i] << " ";
    }

    return 0;
}

