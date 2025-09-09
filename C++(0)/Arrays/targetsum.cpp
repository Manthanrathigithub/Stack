#include<iostream>
using namespace std;
int main()
{
  int size;
  cout<<"Enter the size of the array "<<endl;
  cin>>size;
  int arr[size];
  for (int i=0;i<size;i++){
    cout<<"Enter the value of "<<i+1<<"element of the array"<<endl;
    cin>>arr[i];

  }
  int targetsum=0;
  int count =0;
  cout<<"Enter the value of target sum "<<endl;
  cin>>targetsum;
  for (int i=0;i<size;i++){
    for (int j=i+1;j<size;j++){
      if (arr[i]+ arr[j]==targetsum){
        count++;
      }


    }
  }
  cout<<"The number of pair are "<<count<<endl;
}