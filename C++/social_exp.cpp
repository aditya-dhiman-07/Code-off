#include <iostream>
#include <cstdlib> 

using namespace std;

int diff_society(int n) {

    if (n < 2) {
        return -1; 
    }


    if (n == 2) {
        return 2;
    } 
    if (n == 3) {
        return 3;
    }


    int k = n % 2;
    if (k == 0) {
        return 0;
    } else {
        return 1;
    }
}

void test(int t) {
    for (int i = 0; i < t; i++) {
        int n;
        if (!(cin >> n)) break; 
        int j = diff_society(n);
        cout << j << endl; 
    }
}

int main() {
    int t;
    if (cin >> t) {
        test(t);
    }
    return 0;
}