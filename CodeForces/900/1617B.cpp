#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int p, q;

        if (n % 2 == 0) {
            p = 2;
            q = n - 3;
        } else {
            p = 3;
            while (true) {
                q = n - 1 - p;
                if (q != p && __gcd(p, q) == 1)
                    break;
                p += 2;
            }
        }

        cout << p << " " << q << " " << 1 << "\n";
    }

    return 0;
}