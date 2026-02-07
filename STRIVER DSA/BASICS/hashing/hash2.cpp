#include <bits/stdc++.h>
using namespace std;

class StringHash {
private:
    static const long long mod = 1000000007; // large prime
    static const long long base = 31;        // base for lowercase letters
    vector<long long> hash, power;

public:
    StringHash(const string &s) {
        int n = s.size();
        hash.resize(n + 1, 0);
        power.resize(n + 1, 1);

        for (int i = 0; i < n; i++) {
            hash[i + 1] = (hash[i] * base + (s[i] - 'a' + 1)) % mod;
            power[i + 1] = (power[i] * base) % mod;
        }
    }

    // Get hash of substring [l, r] (0-based)
    long long getHash(int l, int r) {
        long long result =
            (hash[r + 1] - (hash[l] * power[r - l + 1]) % mod + mod) % mod;
        return result;
    }
};
