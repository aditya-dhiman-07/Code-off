#include <bits/stdc++.h>
using namespace std;
int ptrn(vector <int> &arr,int low,int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j){
        while(arr[i]<=pivot&&i<=high-1){
            i++;
        }
        while(arr[j]>pivot&&j>=low+1){
            j--;
        }
        if(i<j){
        swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}
void qs(vector <int> &arr,int low,int high){
    if(low<high){
        int pidx = ptrn(arr,low,high);
        qs(arr,low,pidx-1);
        qs(arr,pidx+1,high);
    }
}
vector <int> quicksort(vector <int> arr){
    qs(arr,0,arr.size()-1);
    return arr;
}
int main() {
    vector<int> arr = {5,96,58,5,3,5,47,8,4,8,52,848};
    arr = quicksort(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}