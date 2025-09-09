#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<int>S;
    S.insert(10);
    S.insert(20);
    S.insert(30);
    S.insert(40);
    S.insert(10);
    S.insert(100);
    for(auto it=S.begin();it!=S.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    unordered_multiset<int>s;
    s.insert(10);
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(10);
    s.insert(100);
    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
}