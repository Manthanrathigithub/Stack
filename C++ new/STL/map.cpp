#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>m;
    m.insert(make_pair(20,30));
    m.insert(make_pair(30,40));
    m.insert(make_pair(50,30));
    m.insert(make_pair(80,30));
    m.insert(make_pair(20,70));// this will not be stored in the key as already same key is present
    m.insert(make_pair(100,80));
   

    m[12]=45;
    m[20]=69;// this will insert and update the previous key value
    cout<<"Map\n";
    for(auto it=m.begin();it!=m.end();it++){
         cout<<it->first<<" "<<it->second;
         cout<<endl;
    }

    multimap<int,int>M;

    M.insert(make_pair(100,10));
    M.insert(make_pair(200,20));
    M.insert(make_pair(300,30));
    M.insert(make_pair(400,40));
    M.insert(make_pair(500,50));
    M.insert(make_pair(600,60));
    M.insert(make_pair(700,70));
    M.insert(make_pair(700,800));
    cout<<"MultiMap\n";
    //M[10]=40;  this operation is prohibited in multimap 
    
    for(auto it=M.begin();it!=M.end();it++){
        cout<<it->first<<" "<<it->second<<"\n";
    }
  

}