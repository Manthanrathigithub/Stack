#include<iostream>
using namespace std;
int f(int n){
    if (n==1){
        return 1;
    }
    return n*f(n-1);  // Space complexity---->O(n)
                      // Time complexity ----->O(n)
    
}
int main()
{
    int result=f(5);
    cout<<result;
    return 0;
}