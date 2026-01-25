#include <bits/stdc++.h>
using namespace std;
//map // key value pair // Unique keys in sorted order
int main() {
    map<int,int> m;
    m[10]=20;
    m.insert({5,10});
    for(auto it :m){
        cout<<it.first << " "<<it.second<<endl;
    }
    cout<<m[10];
    //mmultimap // duplicate keys in sorted order
    //unordered map // duplicated keys ,unsorted
    
    return 0;
}
//map order of log n  // unordered map O(1) ND O(n) in worst case