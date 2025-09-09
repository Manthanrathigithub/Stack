#include<iostream>
using namespace std;
int main()
{
    string s="How are you";
    int vcount=0,ccount=0,words=0;
    for (int i=0;s[i]!='\0';i++){
        if (s[i]=='a' || s[i]=='e' ||  s[i]=='o' || s[i]=='u' || s[i]=='i' ||
             s[i]=='A' || s[i]=='E'|| s[i]=='I' || s[i]=='O' || s[i]=='U'){
            vcount++;
        }
        else if (s[i]>=65 and s[i]<=90 || s[i]<=122 and s[i]>=96) ccount++;
    }
    string r="How are   you";
    for (int i=0;r[i]!='\0';i++){
        if (r[i]==' ' and r[i-1]!= ' '  ){
            words++;
        }
    }
    cout<<vcount<<" "<<ccount<<" "<<words+1;
}