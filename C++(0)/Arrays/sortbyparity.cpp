#include<iostream>
#include<vector>
using namespace std;
void sortbyparity(vector<int>&v){
    int left_ptr=0;
    int right_ptr=v.size()-1;
    int temp=0;
    while (left_ptr<=right_ptr){
        if (v[left_ptr]%2!=0 && v[right_ptr]%2==0){
            temp=v[left_ptr];
            v[left_ptr]=v[right_ptr];
            v[right_ptr]=temp;
            left_ptr++;
            right_ptr--;

        }
        else if (v[left_ptr]%2==0){
            left_ptr++;
        }
        else if (v[right_ptr]%2!=0){
            right_ptr--;
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
 sortbyparity(v);
 for (int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
 }
}