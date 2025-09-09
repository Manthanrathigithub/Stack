#include<iostream>
#include<vector>
using namespace std;
 vector<int> twosum(vector<int>&v,int target){
    for (int i=0;i<v.size();i++){
        for (int j=i+1;j<v.size();j++){
            if(v[i]+ v[j]==target){
                return {i,j};

            }
            
        }
    }
    return {};
}
int main()
{
    int n;
    cin>>n;
    vector<int> V;
    for (int i=0;i<n;i++){
       int ele; cin>>ele;
        V.push_back(ele);
    }
    int target;
    cin>>target;
    vector<int>result=twosum(V,target);
    if (!result.empty()){
        cout<<result[0]<<" "<<result[1];
    }
    else {
        cout<<"No solution";
    }
}