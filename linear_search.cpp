#include<iostream>
using namespace std;
int main()
{
int num,i,loc=-1,item;

cout<<"Enter the no. of elements of array:";
cin>>num;

int arr[num];
cout<<"Enter the elements of array:";
for(i=0;i<num;i++)
{
cin>>arr[i];
}
cout<<"Which no. you want to search ?";
cin>>item;

for(i=0;i<num;i++)
{
if(item==arr[i])
{
loc=i;
break;
}
}
if(loc==-1)
{
cout<<"No. is not available !";
}
else
{
cout<<"No. is available on location "<<loc<<endl;
}
return 0;
}