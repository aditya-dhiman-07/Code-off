#include <iostream>
using namespace std;

// Function to swap two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Selection sort function
void selectionSort(int array[], int size) {
    for (int step = 0; step < size - 1; step++) {
        int min_idx = step;
        // Find the minimum element in the unsorted part
        for (int i = step + 1; i < size; i++) {
            if (array[i] < array[min_idx])
                min_idx = i;
        }
        // Swap the found minimum element with the first element
        swap(&array[min_idx], &array[step]);
    }
}

// Function to print the array
void printArray(int array[], int size) {
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}

// Driver code
int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array before sorting: ";
    printArray(arr, n);

    selectionSort(arr, n);

    cout << "Array after sorting: ";
    printArray(arr, n);

    return 0;
}   