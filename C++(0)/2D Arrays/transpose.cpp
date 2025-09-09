#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cin>>r;
    cin>>c;
    int x[r][c],y[c][r];
    cout<<"Enter the elements of the first matrix ..."<<endl;
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            cout<<"Enter the "<<i+1 <<j+1<< "element of the matrix"<<endl;
            cin>>x[i][j];
        }
        }
        for (int i=0;i<c;i++){
            for (int j=0;j<r;j++){
                y[i][j]=x[j][i];
            }
        }
       for (int i=0;i<c;i++){
        for (int j=0;j<r;j++){
            cout<<y[i][j]<<" ";
        }
        cout<<endl;
       }
    }
