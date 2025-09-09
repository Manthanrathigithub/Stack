#include<iostream>
using namespace std;
/*int main ()
{
    string s="Python";
    char r[7];
    int i;
    for (i=0;s[i]!=0;i++){

    }
    i=i-1;
    int j;
    for ( j=0;i>=0;j++,i--){
        r[j]=s[i];
    }
    r[j]='\0';
  cout<<r;
    
}*/
#include<iostream>
using namespace std;

int main() {
 string s="Python";
 char r [7];
 int i;
 for (i=0;s[i]!='\0';i++){
    r[i]=s[i];
 }
 r[i]='\0';
 i=i-1;
 int j;
 for (j=0;i>j;j++,i--){
    char temp= r[i];
    r[i]=r[j];
    r[j]=temp;
 }
 cout<<r;
}