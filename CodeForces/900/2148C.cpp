#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n,m,a,b;
        cin >> n >> m ;
        int c = 0,d = 0;
        int total = 0;
        while (n--)
        {
            cin >> a >> b;
            c = abs(a-c);
            d = abs(b-d);
            if(c%2==d) total =total + c;
            else total = total + c-1;
            c = a;
            d = b;
        }
        if(m-a>0) total = total+(m-a);
        cout << total << endl;        
    }
    return 0;
}