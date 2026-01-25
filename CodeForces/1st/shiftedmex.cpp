#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long a[3005];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Step 1: sort
        sort(a, a + n);

        // Step 2: remove duplicates manually
        long long b[3005];
        int m = 0;

        for (int i = 0; i < n; i++) {
            if (i == 0 || a[i] != a[i - 1]) {
                b[m] = a[i];
                m++;
            }
        }

        // Step 3: find longest consecutive sequence
        int ans = 1;
        int cnt = 1;

        for (int i = 1; i < m; i++) {
            if (b[i] == b[i - 1] + 1) {
                cnt++;
            } else {
                cnt = 1;
            }

            if (cnt > ans) {
                ans = cnt;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
