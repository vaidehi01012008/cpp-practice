#include<iostream>
using namespace std;
int main()
{
int num,i;
cout<<"Enter the no. of elements of array :";
cin>>num;

int arr[num];
cout<<"Enter the elements of array :";
for(i=0;i<num;i++)
{
cin>>arr[i];
}
for(i=num-1;i>=0;i--)
{
cout<<"Reverse Elements are :"<<arr[i]<<endl;
}
return 0;
}