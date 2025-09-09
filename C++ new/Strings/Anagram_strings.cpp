#include<iostream>
using namespace std;
int main()// Assuming the size of the string is same otherwise check the size
{
    string A="verbose";
    string B="observe";
   int  H[26]={0},J[26]={0};
    for (int i=0;A[i]!='\0';i++){
        H[A[i]-97]+=1;
    }
    for (int i=0;A[i]!='\0';i++){
          J[B[i]-97]+=1;

     }
     bool isAnagram=true;
     for (int i=0;i<26;i++){
        if (H[i]!=J[i]){
            isAnagram=false;
            break;
        }
        }
        if (isAnagram){
            cout<<"Anagram strings";
        }
        else{
            cout<<"Not";
        }
     }
