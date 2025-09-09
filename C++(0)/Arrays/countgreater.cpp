#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v(4);
    for (int i=0;i<4;i++){
        cout<<"Enter "<<i+1<<" element of the vector"<<endl;
        cin>>v[i];

    }
    int x,count=0;
    cout<<"Enter x "<<endl;
    cin>>x;
     for (int i=0;i<4;i++){
        if (v[i]>x)
        count++;

     }
     cout<<"Number greater than x is "<<count<<endl;
}