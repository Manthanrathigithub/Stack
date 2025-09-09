#include<iostream>
using namespace std;

struct Array {
    int A[10];
    int length;
    int size;
};

void Insert_Sort(struct Array *arr, int x) {
    if (arr->length == arr->size) return;
    int i = arr->length - 1;
    while (i >= 0 && arr->A[i] > x) {
        arr->A[i + 1] = arr->A[i];
        i--;
    }
    arr->A[i + 1] = x;
    arr->length++;
}

bool isSorted(struct Array arr) {
    for (int i = 0; i < arr.length - 1; i++) {  // Check till length-1
        if (arr.A[i] > arr.A[i + 1]) {  // Corrected to compare with the next element
            return false;
        }
    }
    return true;
}

void Rearrange(struct Array *arr) {
    int i = 0;
    int j = arr->length - 1;
    while (i < j) {
        while (arr->A[i] < 0 && i < arr->length) i++;
        while (arr->A[j] >= 0 && j >= 0) j--;  // Corrected to use comparison
        if (i < j) { 
                       swap(arr->A[i], arr->A[j]);  // Used swap for simplicity
        }
    }
}

int main() {
    struct Array arr = {{2, -2, -5, 5, 4}, 5, 10};
    // Insert_Sort(&arr, 7);  // Uncomment to test the insertion sort
    Rearrange(&arr);
    for (int i = 0; i < arr.length; i++) {
        cout << arr.A[i] << " ";
    }
    cout << endl;

    cout << (isSorted(arr) ? "Array is sorted" : "Array is not sorted") << endl;

    return 0;
}
