#include <stdio.h>

int oddsum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i += 2) {
        if (i % 3 == 0) continue; 
        sum += i;
        if (sum > 50) break;
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", oddsum(n));
    return 0;
}

