#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    if ((t >= 1) && (t <= 10000)) {
        for (int i = 1; i <= t; i++) {
            int x, y;
            cin >> x;
            cin >> y;
            int j = x;
            int es = 0, os = 0;
            if ((y >= x) && (x >= 1) && (y >= 1) && (x <= 100) && (y <= 100)) {
                for (j; j <= y; j++) {
                    if (j % x == 0) {
                        int temp = j;
                        if (temp % 2 == 0) {
                            es = es + temp;
                        }
                        else {
                            os = os + temp;
                        }
                    }
                }
            }
            else {
                cout << "invalid input";
            }
            if (es >= os) {
                cout << "Alice is happy", "\n";
            }
            else {
                cout << "Alice is sad", "\n";
            }
        }
    }
    else {
        cout << "invalid input";
    }
    return 0;
}