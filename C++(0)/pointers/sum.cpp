#include<iostream>
using namespace std;
int main()
{
  int x,y;
  cin>>x>>y;
  int * ptrx=&x;
  int *ptry=&y;
  int result;
  int *ptrresult=&result;
  result= *ptrx + *ptry;
  cout<<*ptrresult;

}