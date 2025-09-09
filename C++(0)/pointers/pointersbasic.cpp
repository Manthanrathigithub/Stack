#include<iostream>
using namespace std;
int main()
{
 int x=10;
 float y= 6.8;
 int * ptr=&x;
 float * ptr2=&y;
 cout<<&x;
 cout<<endl<<&y;
 cout<<endl<<ptr;
 cout<<endl<<ptr2;
 cout<<endl<<*ptr;

int marks=90;
ptr= &marks;
cout<<"\n"<<ptr<<"\n";
*ptr=20;
cout<<*ptr<<" "<<marks;
}