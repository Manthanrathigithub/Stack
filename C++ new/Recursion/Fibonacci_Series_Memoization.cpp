#include<iostream>
using namespace std;
int f(int n){
    int F[10];
    for (int i=0;i<10;i++){
        F[i]=-1;
    }
    if (n<=1) return n;// base case
    else {
        if (F[n-2] ==-1) {
            F[n-2] =f(n-2);
        }
        if (F[n-1] ==-1){
            F[n-1] == f(n-1);
        }
        return f(n-1) + f(n-2);
    }
// TIme complexity ---->O(n)
}
int main()
{
    cout<<f(6);
}