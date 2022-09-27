#include<iostream>
#include<cstring>
using namespace std;

int main()
{
int array_1[10]={8,4,6,1,6,9,6,1,9,8};
int Input_a_number =6 ;
int count=0;
int length = sizeof(array_1) / sizeof(array_1[0]);


for (int i = 0; i< length ;i++)
{


if (array_1[i]==Input_a_number)
{
    count++;
}


}
cout<< "input number" <<" "<<Input_a_number<<endl;
cout<<"The number occurs in the array"<<" "<< count<< "  times";


}
