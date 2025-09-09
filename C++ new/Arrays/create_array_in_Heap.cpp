#include<iostream>
using namespace std;
int main()
{
    int *p;
    int A[5]={2,4,6,8,10};
    p=new int [5];
    p[0]=3;
    p[1]=5;
    p[2]=7;
    p[3]=9;
    p[4]=11;
  for (int i=0;i<5;i++){
    cout<<p[i]<<" ";
  }
  cout<<endl;
  for (int i=0;i<5;i++){
    cout<<A[i]<<" ";
  }
  cout<<endl;
   delete []p;
   // Increase the size of array in heap
   int *ptr;
   ptr=new int [5];
   p[0]=10,p[1]=5,p[2]=8,p[3]=7,p[4]=6;
   int *q;

   q=new int [10];
   for (int i=0;i<5;i++){
    q[i]=p[i];
   }
   delete []p;
   p=q;
   q=NULL;
   

 for (int i=0;i<10;i++){
    cout<<p[i]<<" ";
   }
  
   

}