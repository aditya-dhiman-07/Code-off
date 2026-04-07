#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,k,a1,a2,b1,b2;
    cin >> t;
    while (t--) {
        cin>>k;
        cin >> a1 >> b1 ;
        cin >> a2 >> b2 ;
        if ((a1 + a2) < (b1 + b2 + k) || ((a1 + a2) == (b1 + b2 + k) && (b1 > a1 || b2 > a2))) cout << "YES" << endl;
        else cout << "NO"<< endl;
}
return 0;
}