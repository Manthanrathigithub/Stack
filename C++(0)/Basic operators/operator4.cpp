#include<iostream>
using namespace std;
int main()
{   
    int a=4;
    char name='a';
    cout<<sizeof(name)<<endl;
    cout<<sizeof(a)<<endl;
    bool flag;
    a>name? flag=true: flag=false;
 cout<< flag<<endl; 
 cout<<&a<<endl;




    return 0;
}