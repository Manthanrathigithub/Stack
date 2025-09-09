#include <iostream>
using namespace std;

void display(int A[4][4], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << A[i][j] << " ";
            }
        cout << endl;
    }
}

int main() {
    int n = 4;
    int A[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    display(A, n);
 for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            swap(A[i][j], A[j][i]);
        }
    }

    cout << "Transposed Matrix"<<endl;
    display(A, n);

     int left=0;
     int right=3;
     while(left<right){
        for(int i=0;i<4;i++){
            swap(A[i][left],A[i][right]);
        }
        left++;
        right--;
     }
     cout<<"Rotated matrix"<<endl;
display(A,n);
    return 0;
}
