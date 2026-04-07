#include <bits/stdc++.h>
using namespace std;
int partition(vector<int>& arr,vector<int>& arr1, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
            swap(arr1[i], arr1[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    swap(arr1[i + 1], arr1[high]);
    return i + 1;
}

void quickSort(vector<int>& arr,vector<int>& arr1, int low, int high) {
    if (low < high) {
        int pi = partition(arr,arr1, low, high);
        quickSort(arr,arr1, low, pi - 1);
        quickSort(arr,arr1, pi + 1, high);
    }
}
int main() {
    
    return 0;
}