#include <bits/stdc++.h>
using namespace std;

void arrrev(vector<int>& a, int i, int n);

int main() {
    vector<int> a = {5, 9, 4, 5, 5, 1, 2, 8, 25};

    int n = a.size();
    arrrev(a, 0, n);

    for (auto it : a) {
        cout << it << " ";
    }
    return 0;
}

void arrrev(vector<int>& a, int i, int n) {
    if (i >= n / 2) return;
    swap(a[i], a[n - i - 1]);
    arrrev(a, i + 1, n);
}
