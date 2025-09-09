#include<iostream>
using namespace std;
int power(int n,int count){
    if (count==0) return 1;
    int ans;
    if (count %2==0){
    ans=power(n,count/2);
    return ans*ans;
    }
    else if (count %2!=0){
        ans=power(n,(count-1)/2);
        return n*ans*ans;
    }
}
int f(int n,int count){
    int sum=0;
    if (n==0) return 0 ;
     f(n/10,count) ;
    sum = power(n%10,count);
    return sum;
}
int main()
{
    int n;
    cin>>n;
    int temp=n;
    int count =0;
    while (temp>0){
        temp/=10;
        count++;
    }
    int result=f(n,count);
    if (result==n){
        cout <<"Armstrong Number ";
    }
    else {
        cout<<"Not an Armstrong Number";
    }
}