#include<iostream>
using namespace std;
int isprime(int n){
    for (int i=2;i<=n-1;i++){
        if (n%i==0) return false;
    }
return true;
}
int main()
{ 
    int a,b;
    cout<<"Enter value of a "<<endl;
    cin>>a;
    cout<<"Enter value of b"<<endl;
    cin>>b;
    for (int i=a;i<=b;i++){
       if (isprime(i)){
        cout<<i<<" ";
       }
    }


}