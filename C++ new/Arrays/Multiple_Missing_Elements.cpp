#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int array[n]={1,2,3,5,6,7,8,9,10,11,14,15};
    int l=1;
    int diff=l-0;
    
    for (int i=0;i<n;i++){
        if (diff!= array[i]-i){
            while (diff< array[i] - i){
                cout<<"Missing element "<<i+diff;
                diff++;
            }
        }
    }

}