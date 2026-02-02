#include <bits/stdc++.h>
using namespace std;
void printnum(int i ,int n){
    if (i>n){
        return;
    }
    cout<<i;
    printnum(i+1,n);
}
void printnum2(int i ,int n){
    if (i<1){
        return;
    }
    printnum2(i-1,n);
    cout<<i;
}
void printnum3(int i ,int n){
    if (i<1){
        return;
    }
    printnum3(i-1,n);
    cout<<n-i+1;
}
void printnum1(int n){
    if (n<1){
        return;
    }
    cout<<n;
    printnum1(n-1);
}
int sum1(int n){
    if (n<1){
        return 0;
    }
    return n+sum1(n-1);
}
void sum2(int n ,int sum){
    if (n<1){
        cout<<sum;
        return;
    }
    sum2(n-1,sum+n);
}
int fact(int n){
    if (n<1){
        return 1;
    }
    return n*fact(n-1);
}
int main() {
    int n;
    cin>>n;
    int s = fact(n);
    cout<<s;
    return 0;
}
