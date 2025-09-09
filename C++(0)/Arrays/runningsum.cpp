#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for (int i=0;i<n;i++){
        int ele; cin>>ele;
        v.push_back(ele);
    }
   
    for (int i=1;i<v.size();i++){
        v[i] += v[i-1];
    }
    for (int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}