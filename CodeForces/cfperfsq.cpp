#include <bits/stdc++.h>
using namespace std;

void printNums(int n) {
    int limit = min(n, 20);
    for (int i = 1; i <= limit; i++) {
        cout << i << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        if (n > 0)
            printNums(n);
    }
    return 0;
}
