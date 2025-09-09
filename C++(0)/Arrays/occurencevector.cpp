#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int size;
  cout<<"Enter size of the vector "<<endl;
  cin>>size;

     vector<int> v(size);
  for (int i=0;i<size;i++){
      cout<<"Enter  "<< i+1<<" element of the vector ";
      cin>>v[i];
  }   
  int x,ans;
  cout<<"Enter x"<<endl;
  cin>>x;
      for (int j=0;j<size;j++){
        if (v[j]==x)
        ans=j;
      }
    cout<<"Last position of the vector is "<<ans;
}