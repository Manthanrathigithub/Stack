#include<iostream>
using namespace std;
int main()
{
    int H[26]={0};
    char A[]="finding";
    for (int i=0;A[i]!='\0';i++){
        H[A[i]-97]+=1;
    }
  for (int i=0;i<26;i++){
    if(H[i]>1){
        cout<<char(i+97)<<" Appears"<< H[i]<<" times"<<endl;
    }
  }
}