#include <iostream>
using namespace std;

// Function to find index of minimum element
int findMinIndex(int arr[], int start, int n) {
    if (start == n - 1)
        return start;

    int minIndex = findMinIndex(arr, start + 1, n);
    return (arr[start] < arr[minIndex]) ? start : minIndex;
}

// Recursive Selection Sort
void selectionSort(int arr[], int start, int n) {
    if (start >= n - 1)
        return;

    int minIndex = findMinIndex(arr, start, n);
    swap(arr[start], arr[minIndex]);

    selectionSort(arr, start + 1, n);
}

// Driver Code
int main() {
    int arr[] = {25, 54, 5, 4, 2, 45, 41, 40};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before Sorting:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    selectionSort(arr, 0, n);

    cout << "\n\nAfter Recursive Selection Sort:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
