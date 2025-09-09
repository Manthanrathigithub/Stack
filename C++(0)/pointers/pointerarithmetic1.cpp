#include<iostream>
using namespace std;
int main()
{
    int x=10;
    int *ptr=&x;
    double y=3.2;
    double *ptr2=&y;
    cout<<sizeof(y)<<endl;
    cout<<sizeof(x)<<endl;
    
    cout<<ptr<<" "<<ptr+1<<endl;
    cout<<ptr2<<" "<<ptr2+1;
}