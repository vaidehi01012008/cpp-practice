#include<iostream>
using namespace std;
int main()
{
int a,b,choice;
cout<<"Choose any option from given below ! ";
cout<<"For Addition press:1"<<endl;
cout<<"For Subtraction press:2"<<endl;
cout<<"For Multiplication press:3"<<endl;
cout<<"For Division press:4"<<endl;
cin>>choice;

cout<<"Enter any two no:";
cin>>a>>b;
if(choice==1)
{
cout<<"Addition ="<<a+b;
}
else if (choice==2)
{
cout<<"Subtraction="<<a-b;
}
else if (choice==3)
{
cout<<"Multiplication="<<a*b;
}
else if(choice==4)
{
cout<<"Division="<<a/b;
}
else
{
cout<<"Invalid no !";
}
return 0;
}