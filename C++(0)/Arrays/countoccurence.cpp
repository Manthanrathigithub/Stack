#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v(5);
    for (int i=0;i<5;i++){
        cout<<"Enter "<<i+1<< "element of the array"<<endl;
        cin>>v[i];

    }
    int x,count=0;
    cout<<"Enter the number whose occurence is to be checked"<<endl;
    cin>>x;
     for (int i=0;i<5;i++){
        if (v[i]==x){
            count ++;
        }
     }
cout<<"total occurence of the number is "<<count<<endl;
    
}