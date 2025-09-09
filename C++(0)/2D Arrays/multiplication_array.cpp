#include<iostream>
using namespace std;
int main()
{
   int r1,r2,c1,c2;
   cout<<"Enter the value of row of 1st matrix"<<endl;
   cin>>r1;
   cout<<"Enter the value of column of 1st matrix"<<endl;
   cin>>c1;
   cout<<"Enter the value of rows of 2nd matrix"<<endl;
   cin>>r2;
   cout<<"Enter the value of column of 2nd matrix"<<endl;
   cin>>c2;
   if (c1!=r2){
    cout<<"Multilplication of the matrix is not possible"<<endl;
    exit(0);
   }
   else{
    int x[r1][c1],y[r2][c2],z[r1][c2];
    for (int i=0;i<r1;i++){
        for (int j=0;j<c1;j++){
            cout<<"Enter the value of X "<<i+1<<j+1<<endl;
            cin>>x[i][j];
        }
    }
    for (int i=0;i<r2;i++){
        for (int j=0;j<c2;j++){
            cout<<"Enter the value of Y "<<i+1<<j+1<<endl;
            cin>>y[i][j];
        }
    }
     
    for (int i=0;i<r1;i++){
        for (int j=0;j<c2;j++){
            z[i][j]=0;
            for (int k=0;k<r2;k++){
                z[i][j] += x[i][k]*y[k][j];
            }


        }
    }
    for (int i=0;i<r1;i++){
        for (int j=0;j<c2;j++){
            cout<<z[i][j]<<" ";
        }
        cout<<endl;
    }   
   }
   
}