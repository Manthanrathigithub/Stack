#include<iostream>
using namespace std;
/*int main ()
{
    int k;cin>>k;
    int A[10]={6,3,8,10,16,7,5,2,9,14};
    for (int i=0;i<9;i++){
        for (int j=i+1;j<10;j++){
            if (A[i] + A[j]==k){
                cout<<"The pairs are "<<A[i]<<"and"<<A[j]<<endl;
            }
        }
    }
}*/
#include <iostream>
using namespace std;

int main() {
    int k;
    cin >> k;
    int arr[10] = {6, 3, 8, 10, 16, 7, 5, 2, 9, 14};
    int H[17] = {0};  // Assuming max value in arr is 16, hence size is 17

    for (int i = 0; i < 10; i++) {
        if (H[k - arr[i]] != 0 && (k - arr[i]) >= 0) {
            cout << "The pairs are: " << arr[i] << " and " << k - arr[i] << endl;
        }
        H[arr[i]]++;
    }

    return 0;
}
