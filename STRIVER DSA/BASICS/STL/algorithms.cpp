#include <bits/stdc++.h>
using namespace std;
bool comp (pair<int,int> p1,pair<int,int>p2){
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;

    //They are same
    if(p1.first>p2.first)return true;
    return false;
}

int main() {
    // vector<int> a;
    // a.push_back(1);
    // a.push_back(54);
    // a.push_back(15);
    // a.push_back(47);
    // a.push_back(65);
    // // sort(a,a+n);
    // sort(a.begin(),a.end());
    // for(auto it:a){
    //     cout<<it<<" ";
    // }
    // sort(a.begin(),a.end(),greater<int>());
    // for(auto it:a){
    //     cout<<it<<" ";
    // }
    // pair<int,int> a[] = {{5,6},{6,7},{5,7}};
    // //sort(a,a+n,comp)
    // //comp = self built comprator
    int n = 12;
    int cnt = __builtin_popcount(n);
    cout<<cnt;
    return 0;
}