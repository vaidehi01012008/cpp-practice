#include<iostream>
using namespace std;
int main()
{
int large=0,num,i;
cout<<"Enter the no of elements of array:";
cin>>num;

int arr[num];
cout<<"Enter the elements of array:";
for(i=0;i<num;i++)
{
cin>>arr[i];
}
for(i=0;i<num;i++)
{
if(large<arr[i])
{
large=arr[i];
}
}
cout<<"Largest element is :"<<large<<endl;
return 0;
}