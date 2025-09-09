#include<iostream>
using namespace std;
/*void perm(string s,int k){
    static int F[10]={0};
    static char Res[10];
    int i;
    if (s[k]=='\0'){
        Res[k]='\0';
        cout<<Res<<endl;
    }
    else {
        for (i=0;s[i]!='\0';i++){
            if (F[i]==0) {
                Res[k]=s[i];
                F[i]=1;
                perm(s,k+1);
                F[i]=0;
            }
        }
    }
}
int main()
{
    string s="ABC";
    perm(s,0);
    return 0;
}*/
void perm(string s ,int l,int h){
    int i;
    if (l==h) cout<<s<<endl;
    else {
        for (i=l;i<=h;i++){
            swap(s[i],s[l]);
            perm(s,l+1,h);
            swap(s[l],s[i]);
        }
    }
}
int main()
{
    string s="ABC";
    perm(s,0,2);
}