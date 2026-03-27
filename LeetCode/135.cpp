#include <bits/stdc++.h>
using namespace std;
int getSum(int n) {
    if (n == 0) 
        return 0;
    return n + getSum(n - 1);
}
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int> left(n, 1);
        vector<int> right(n, 1);

        for (int i = 1; i < n; i++)
            if (ratings[i] > ratings[i-1])
                left[i] = left[i-1] + 1;

        for (int i = n-2; i >= 0; i--)
            if (ratings[i] > ratings[i+1])
                right[i] = right[i+1] + 1;

        int total = 0;
        for (int i = 0; i < n; i++)
            total += max(left[i], right[i]);

        return total;
    }
int main() {
    vector<int> ratings ;
    return 0;
}