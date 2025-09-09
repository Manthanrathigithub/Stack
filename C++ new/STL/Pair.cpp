    #include<iostream>
    #include<bits/stdc++.h>
    using namespace std;
    int  main(){
        pair<string,int>p;
    // p.first="Rohit";
        //p.second=30;
        p=make_pair("Rohit",30);
        cout<<p.first<<" "<<p.second<<" ";
        cout<<endl;
        // NESTED PAIRS

        // to store age,name,weight,count   

        pair<pair<string,int>,pair<int,int>>p2;
        p2=make_pair(make_pair("Rohit",30),make_pair(50,5));
        cout<<p2.first.first<<" "<<p2.first.second<<" "<<p2.second.first<<" "<<p2.second.second<<endl;
    }