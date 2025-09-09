#include<iostream>
using namespace std;
int main()
{
    string s="WeLCoMe";
    int i;
    for ( i=0;s[i]!='\0';i++){
     if (s[i]<=90 and s[i]>=65)
     s[i]=s[i] + 32;
     else if (s[i]>=96 && s[i]<=122){
        s[i]=s[i]-32;
     }
     }
     cout<<s;
}