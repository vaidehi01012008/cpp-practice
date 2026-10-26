#include<iostream>
using namespace std;
int main()
{
int sum=0,i,num;
cout<<"Enter the no of elements of array:";
cin>>num;

int arr[num];

cout<<"Enter the elements of array :";

for(i=0;i<num;i++)
{
cin>>arr[i];
}
for(i=0;i<num;i++)
{
sum=sum+arr[i];
}
cout<<"Addition of arrays is :"<<sum<<endl;
return 0;
}