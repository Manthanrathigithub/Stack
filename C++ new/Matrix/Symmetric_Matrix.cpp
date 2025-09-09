#include<iostream>
using namespace std;
int main()
{
    int A[3][3];
        for (int i=0;i<3;i++){
            for (int j=0;j<3;j++){
                cin>>A[i][j];
            }
            
        }

        bool symmetric =true;
        for (int i=0;i<3;i++){
            for (int j=0;j<3;j++){
                if (A[i][j]!=A[j][i]){
                    cout<<"Not symmetric matrix"<<endl;
                    symmetric=false;
                    break;
                }
                
            }
                   }
if (symmetric) cout<<"symmetric";
 
}