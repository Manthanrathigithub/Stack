#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//15 20 25 30 50
int main()
{
    list<int>l1;
    l1.push_back(25);
    l1.push_back(30);
    l1.push_front(20);
    l1.push_front(15);
    l1.push_back(50);
    l1.pop_back();
   
    for(auto it=l1.begin(); it!=l1.end();it++){
        cout<<*it<<" ";
       
    }
     cout<<endl;
    cout<<l1.back()<<" "<<l1.front()<<endl;

    // print in reverse

    for(auto it=l1.rbegin();it!=l1.rend(); it++){
        cout<<*it<<" ";
    }
}