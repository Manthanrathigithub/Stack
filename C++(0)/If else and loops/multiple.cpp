#include<iostream>
using namespace std;
int main()
{
     int n;
     for (int i=1; ;i++){
          if (i%5==0&&i%7==0){
               n=i;
               break;
          }
     }
     cout<<n;

}