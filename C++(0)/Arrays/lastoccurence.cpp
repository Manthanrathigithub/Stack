#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>V(6);
    for (int i=0;i<6;i++){
        cout<<"Enter the values of "<< i+1<<"element of the vector"<<endl;
        cin>>V[i];
    }
    int x,occurence=-1;
    cin>>x;
    for (int i=V.size()-1;i>=0;i--){
        if (V[i]==x){
            occurence=i;
            break;
        }
    }
    cout<<occurence;


}
