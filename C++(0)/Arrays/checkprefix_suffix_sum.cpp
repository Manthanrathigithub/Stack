#include<iostream>
#include<vector>
using namespace std;
bool checkprefix_suffix_sum(vector<int>&v){
    int total_sum=0;
    int prefix_sum=0;
    int suffix_sum=0;
    for (int i=0;i<v.size();i++){
        total_sum = total_sum + v[i];
    }
    for (int i=0;i<v.size();i++){
        prefix_sum= prefix_sum  + v[i];
        suffix_sum = total_sum - prefix_sum;
        if (suffix_sum == prefix_sum){
            return true;
        }
          }
    
}
int main()
{
   int n;
   cin>>n;
   vector<int>v;
   for (int i=0;i<n;i++){
    int ele; cin>>ele;
    v.push_back(ele);
   }  
   cout<<checkprefix_suffix_sum(v)<<endl;
}