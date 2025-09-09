/*#include<iostream>// tolower -> Used to convert upppercase charcters to lower that's
// safe for case sensitivity
using namespace std;
int main()
{
    string s="Korrok";
    int i;
    for ( i=0;s[i]!=0;i++){

    }
    int left=0;
    int right=i-1;
    bool isPalidrome=true;
    while (left<=right){
        if (tolower(s[left])!=tolower(s[right])) {
            cout<<"Not palidrome";
            isPalidrome=false;
        break;
        }
        
       left++;
       right--;
    }
  if (isPalidrome) cout<<"palidrome";
}
*/
// By reversing
#include<iostream>
using namespace std;
int main()
{
    string s="Madam";
    char r[10];
    int i;
    for ( i=0;s[i]!=0;i++){r[i]=s[i];}
    r[i]='\0';
    i=i-1;
    int j=0;
    for (j=0;i>j;j++,i--){
        char temp=r[i];
        r[i]=r[j];
        r[j]=temp;
    }
    bool isPalidrome=true;
    for (int l=0;s[l]!='\0';l++){
        if (tolower(s[l])!=tolower(r[l])) {
            cout<<"Not palidrome";
            isPalidrome=false;
            break;
        }

    }
    if(isPalidrome) cout<<"Palidrome";
    
    
}