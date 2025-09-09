#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> V(n, vector<int>(n));

    // Input the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> V[i][j];
        }
    }

    // Transpose the matrix
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(V[i][j], V[j][i]);
        }
    }

    // Reverse each row of the transposed matrix
    for (int i = 0; i < n; i++) {
        reverse(V[i].begin(), V[i].end());
    }

    // Output the rotated matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << V[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
