#include <iostream>
using namespace std;

struct Array {
    int A[10];
    int length;
    int size;
};

struct Array* Merge_Arrays(struct Array* arr, struct Array* arr1) {
    int i = arr->length - 1;
    int j = arr1->length - 1;
    int k = arr->length + arr1->length - 1;

    struct Array* arr2 = new Array; // Correct allocation
    arr2->length = arr->length + arr1->length;
    arr2->size = 10; // Assuming maximum size

    while (i >= 0 && j >= 0) {
        if (arr->A[i] > arr1->A[j]) {
            arr2->A[k--] = arr->A[i--];
        } else {
            arr2->A[k--] = arr1->A[j--];
        }
    }

    while (i >= 0) {
        arr2->A[k--] = arr->A[i--];
    }

    while (j >= 0) {
        arr2->A[k--] = arr1->A[j--];
    }

    return arr2;
}

int main() {
    struct Array arr = {{1, 2, 5, 7, 9}, 5, 10};
    struct Array arr1 = {{0, 4, 6, 13, 45}, 5, 10};
    struct Array* arr2;
    arr2 = Merge_Arrays(&arr, &arr1);
    for (int i = 0; i < arr2->length; i++) {
        cout << arr2->A[i] << " ";
    }
    cout << endl;
    delete arr2; // Free allocated memory
    return 0;
}
