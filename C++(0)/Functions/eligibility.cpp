#include<iostream>
using namespace std;

void eligibility(int age,int  limit){
    if ( age>=limit){
        cout<<"Eligible";
    }
    else if (limit>age)
    cout<<"Not Eligible";
}

int main()
{
      int age;
      cout<<"Enter age of the person"<<endl;
      cin>>age;
      eligibility(age,18);
}