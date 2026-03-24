#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int i = 0, j = n - 1;
        while(i < n && s[i] != 'A') i++;
        while(j >= 0 && s[j] != 'B') j--;
        if (i > j) cout << 0 << endl;
        else cout << j - i << endl;
    }
    return 0;
}