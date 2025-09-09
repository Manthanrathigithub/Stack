#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Enter 1st number "<<endl;
    cin>> n1;
    cout<< "Enter 2nd number "<<endl;
    cin>> n2;
    cout<< "Values of n1 and n2 before swapping are "<<n1<<" "<< n2<<endl;
    int temp;
    temp=n1;
    n1=n2;
    n2=temp;
    cout << "Values of n1 and n2 after swapping are  "<< n1<<" "<<n2<<endl;
    return 0;
}