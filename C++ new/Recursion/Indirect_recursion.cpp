#include<iostream>
using namespace std;
void f(int n);
void f1(int n){
    if (n>0){
        cout<<n<<" ";
        f(n/2);
    }
}
void f(int n){
    if (n>0){
        cout<<n<<" ";
        f1(n-1);
    }
}
int main()
{
    f(20);
}