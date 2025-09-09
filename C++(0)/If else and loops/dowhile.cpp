#include<iostream>
using namespace std;
int main()
{
    int n;    cout<<"Enter a number "<<endl;
    cin>>n;
    int i=0,sum=0;
  do {
sum=sum+i;
i++;

  }
  while (i<n);
  sum=sum+n;
  cout<<"Sum is "<<sum<<endl;
}