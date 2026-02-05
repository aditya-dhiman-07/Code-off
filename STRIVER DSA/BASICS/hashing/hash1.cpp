#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin >> n;
    int arr [n] = {0};
    for (int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    //precompute

    int hash[13] = {0};
    for (int i = 0; i<n;i++){
        hash[i] += 1;
    }
    int q;
    cout<<"Enter number of queries:";
    cin >> q;
    while(q--){
        int num;
        cout<< "ENTER QUERY ";
        cin >> num;
        cout<< hash[num]<<endl;
    }
    return 0;
}