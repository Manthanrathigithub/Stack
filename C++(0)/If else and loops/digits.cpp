#include<iostream>
using namespace std;
int main()
{
int n,count=0;
cout<<"Enter a number "<<endl;
cin>>n;
while (n!=0){
   n=n/10;
   count++;
    

}
cout<<"Total digits of the entered number is "<<count;
    return 0;
}