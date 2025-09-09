#include<iostream>
#include<vector>
using namespace std;
void sort0and1(vector<int>&v){
  int temp=0;
  int left_ptr=0;
  int right_ptr=v.size()-1;
 while (left_ptr<=right_ptr){
    if (v[left_ptr]==1 && v[right_ptr]==0){
      temp=v[left_ptr];
      v[left_ptr]=v[right_ptr];
      v[right_ptr]=temp;
      
      left_ptr++;
      right_ptr--;
    }
    else if (v[left_ptr]==0){
      left_ptr++;
    }
    else if (v[right_ptr]==1){
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
  sort0and1(v);
  for (int i=0;i<v.size();i++)
  cout<<v[i]<<" ";
}