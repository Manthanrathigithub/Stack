#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<vector<int>>V(n,vector<int>(n));
    int num=1;
    int left=0;
    int right=n-1;
    int top=0;
    int bottom=n-1;
    int direction=0;
    while (left<=right and top<=bottom){
        if (direction==0){
        for (int i=left;i<=right;i++){
            V[top][i]=num;
            num++;
        }
        top++;
        }
        else if (direction==1){
            for (int j=top;j<=bottom;j++){
                V[j][right]=num++;
                            }
            right--;
        }
        else if (direction==2){
            for (int k=right;k>=left;k--){
                V[bottom][k]=num++;
            }
            bottom--;
        }
        else {
            for (int l=top;l<=bottom;l++){
                V[l][left]=num++;
            }
            left++;
        }
        direction=(direction+1)%4;
    }
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<V[i][j]<<" ";
        }
        cout<<endl;
    }
}
