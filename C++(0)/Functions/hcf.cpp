#include<iostream>
using namespace std;
int min(int a,int b){
    if (a>b)
    return b;
    else return a;
}

int hcf(int a,int b){
      int gcd;
      for (int i=min(a,b);i>=1;i--){
        if (a%i==0 && b%i==0){
        gcd=i;

        break;

      }
      }
return gcd;
}
int main()
{
    int a,b;
cout<<"enter a ";
cin>>a;
cout<<endl<<"enter b ";
cin>>b;
cout<<"the hcf of the number is "<<hcf(a,b);

}
