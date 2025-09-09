#include<iostream>
using namespace std;
void findFirstAndLastindex(string s,char ch,int *first, int *last){
    for (int i=0;i<s.size();i++){
        if (s[i]==ch){
            *first=i;
            break;
        }
    }
    for (int i=s.size()-1;i>=0;i--){
        if (s[i]==ch){
            *last=i;
            break;
        }
    }
    return;
}
int main(){


   string s="aabcsaw";
    char ch='a';
    int first=-1;
    int last=-1;
    int *ptr=&first;
    int *ptr1=&last;
    findFirstAndLastindex(s,ch,ptr,ptr1);
    cout<<first<<" "<<last;
}
