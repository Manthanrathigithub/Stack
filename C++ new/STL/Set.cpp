#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
    int age;
    string name;

    bool operator <(const Person & other)const{
        return age >other.age;
    }
};
int main()
{
    set<int,greater<int>>s;
    s.insert(10);
    s.insert(20);
    s.insert(10);
    s.insert(10);
    s.insert(10);
    s.insert(10);
    s.insert(50);
    s.insert(70);
    s.erase(10);
    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
cout<<endl;
if(s.find(50)!=s.end()){ // s.count() can also be used
    cout<<"Present\n";
}
else {
    cout<<"Absent\n";
}
set<Person>s1;
Person p1,p2,p3;
p1.age=10; p1.name="Mohit";
p2.age=20; p2.name="Rohit";
p3.age=30; p3.name="Sohit";
s1.insert(p1);
s1.insert(p2);
s1.insert(p3);

for(auto it=s1.begin() ; it!=s1.end() ;it++){
    cout<<it->age <<" "<<it->name;
    cout<<endl;
}
}