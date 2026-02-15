#include <bits/stdc++.h>
using namespace std;
// TIME COMPLEXITY log(n)
int main() {
    int n ;
    cin >> n;
    int arr [n] = {0};
    map<long,long> mpp;
    for (int i = 0 ; i<n ; i++){
        cin>>arr[i];
        mpp[arr[i]]++;;
    }

    int q;
    cout<<"Enter number of queries:";
    cin >> q;
    while(q--){
        int num;
        cout<< "ENTER QUERY ";
        cin >> num;
        cout<< mpp[num] <<endl;
    }
    return 0;
}