#include <iostream>

using namespace std;

int main()

{

    int array_1[10]={8,4,6,1,6,9,6,1,9,8},as[10];

    int size=10,i,j;
    for(i=0; i<size; i++)
    {
    int c=1;
    for(j=i+1; j<size; j++)
    {
    if(array_1[i]==array_1[j])
    {
    c++;
    as[j]=0;
    }
    }
    if(as[i]!=0)
    {
    as[i]=c;
    }
    }
    for(i=0;i<=9;i++)
    {
    cout<<"your number"<<" "<<array_1[i]<<" "<<" occured"<<" "<<as[i]<<" "<<"times"<<endl;
    }

     return 0;

    }
