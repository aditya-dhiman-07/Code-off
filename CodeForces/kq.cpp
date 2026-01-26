#include <bits/stdc++.h>
using namespace std;

void swap1(vector<int>& a,vector<int>& b,int l,int r) {
    int n = a.size();
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        int q;
        cin >> n >> q;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        vector<int> b(n);
        for (int i = 0; i < n; i++) cin >> b[i];
        while (q--){
            int l,r;
            cin>>l>>r;
            swap1(a,b,l,r);
            long long sum = accumulate(a.begin()+l, a.begin()+r+1, 0LL);
        }
    }
    return 0;
}