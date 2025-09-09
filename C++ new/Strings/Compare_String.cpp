#include<iostream>
using namespace std;
int main()
{
    char A[]="Painter";
    char B[]="Painter";
    int i,j;
    for ( i=0,j=0;A[i]!='\0' && B[i]!='\0';i++,j++){
        if(A[i]!=B[i]) break;
        
        
    }
    if (A[i]==B[j]) cout<<"Same";
    else if (A[i]>B[j]) cout<<"Greater";
    else cout<<"Smaller";


}