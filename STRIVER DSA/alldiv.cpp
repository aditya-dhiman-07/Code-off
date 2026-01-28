#include <bits/stdc++.h>
using namespace std;
void printdiv(int n){
    vector <int> a;
    for(int i = 1 ;i*i<=n;i++){
        if(n%i==0){
            a.push_back(i);
            if(n/i!=i){
                a.push_back(n/i);
            }
        }
    }
    sort(a.begin(),a.end());
    for(auto it:a){
        cout<<it<<" ";
    }
}
int main() {
    int n;
    cin>>n;
    printdiv(n);
    return 0;
}