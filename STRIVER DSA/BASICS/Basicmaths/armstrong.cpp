#include <bits/stdc++.h>
using namespace std;
    bool isArmstrong(int n) {
        int k = n;
        int sum = 0;

        while (n != 0) {
            int x = n % 10;
            sum += x * x * x;
            n /= 10;
        }

        return sum == k;
    }
int main() {
    int n;
    cin >> n;
    if(isArmstrong(n)){
        cout<<n<<" is a Armstrong number.";
    }
    else cout<<n<<" is a Armstrong number.";
    return 0;
}