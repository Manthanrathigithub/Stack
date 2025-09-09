#include<iostream>
using namespace std;
int main()
{
    string s="Manthan";
    int i,j,length;
    for (length=0;s[length]!='\0';length++){}
    //cout<<length;
    
    for (i=0;i<length    ;i++){
        int count=0;
     for (j=i+1;j<length;j++){
        if (tolower(s[i])==tolower(s[j])) count++; 
     }
     if (count>0){
        cout<<s[i]<<" appears"<<count+1<<" Times"<<endl;
     }
        }
}