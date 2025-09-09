#include<iostream>
#include<vector>
using namespace std;
int printmaxones(vector<vector<int>>&V){
    int maxones=INT16_MIN;
    int maxonesrows=-1;
    int columns=V[0].size();
    int numberofones;
   
    for (int i=0;i<V.size();i++){
        for (int j=0;j<V[i].size();j++){
            if (V[i][j]==1){
                
            numberofones= columns - j;
             if (maxones<numberofones){
                maxones=numberofones;
                maxonesrows=i;
            }
            break;

        }
    }

}
return maxonesrows;
}
int main()
{
    int r,c;
    cin>>r>>c;
    vector<vector<int>>V(r,vector<int>(c));
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            cin>>V[i][j];
        }
       
    }
   int res=printmaxones(V);
   cout<<res;
}