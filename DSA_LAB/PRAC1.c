#include <stdio.h>

void reverseArray(int A[], int n)
{
    int start = 0, end = n - 1;
    while (start < end)
    {
        int temp = A[start];
        A[start] = A[end];
        A[end] = temp;
        start++;
        end--;
    }
}

void display(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int sum_Array(int A[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += A[i];
    }
    return sum;
}

int Max(int A[], int n)
{
    int max = A[0];
    for (int i = 1; i < n; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    return max;
}

int SecondMax(int A[], int n)
{
    int max = Max(A, n);
    int secondMax = -1;
    for (int i = 0; i < n; i++)
    {
        if (A[i] > secondMax && A[i] != max)
        {
            secondMax = A[i];
        }
    }
    return secondMax;
}
int smallest_element(int A[], int n)
{
    int smallest = A[0];
    for (int i = 1; i < n; i++)
    {
        if (A[i] < smallest)
        {
            smallest = A[i];
        }
    }
    return smallest;
}

int main()
{
    int A[] = {7, 45, 24, 89, 90, 24, 55, 67};
    int n = 8;

    printf("Original array: ");
    display(A, n);

    reverseArray(A, n);
    printf("Reversed array: ");
    display(A, n);

    int sum = sum_Array(A, n);
    printf("Sum of array elements: %d\n", sum);

    int max = Max(A, n);
    printf("Max element: %d\n", max);

    int secondMax = SecondMax(A, n);
    printf("Second max element: %d\n", secondMax);

    int smallest = smallest_element(A, n);
    printf("Smallest element: %d\n", smallest);
    return 0;
}
