#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
unordered_map<int,int>m;
m.insert(make_pair(10,20));
m.insert(make_pair(20,30));
m.insert(make_pair(20,40));
m.insert(make_pair(30,50));
m.insert(make_pair(40,70));
cout<<"UnOrdered Map\n"; 
for(auto it=m.begin();it!=m.end();it++){
    cout<<it->first<<" "<<it->second<<"\n";

}
cout<<"UNORDERED MULTI MAP\n";
unordered_multimap<int,int>M;
M.insert(make_pair(20,30));
M.insert(make_pair(40,40));
M.insert(make_pair(23,40));
M.insert(make_pair(24,50));
M.insert(make_pair(55,355));
M.insert(make_pair(55,35));
for(auto it=M.begin();it!=M.end();it++){
    cout<<it->first<<" "<<it->second<<"\n";
}
}
