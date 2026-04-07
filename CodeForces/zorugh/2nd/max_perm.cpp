#include <bits/stdc++.h>
using namespace std;

void perm(vector<int>& a) {
    int n = a.size();

    for (int i = 0; i < n; i++) {
        int max = a[i], posi = i;

        for (int j = i; j < n; j++) {
            if (a[j] > max) {
                max = a[j];
                posi = j;
            }
        }

        if (max > a[i]) {
            reverse(a.begin() + i, a.begin() + posi + 1);
            return;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        perm(a);

        for (int x : a) cout << x << " ";
        cout << "\n";
    }
}
