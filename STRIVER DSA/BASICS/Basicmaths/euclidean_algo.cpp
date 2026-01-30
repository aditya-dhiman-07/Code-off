#include <bits/stdc++.h>
using namespace std;
void euclidean_GCD(int a,int b){
    while(a>0&&b>0){
        if (a>b) a = a%b;
        else b = b%a;
    }
    if (a == 0) cout<<b;
    else cout<<a;
}

int main() {
    int a,b;
    cin>>a>>b;
    euclidean_GCD(a,b);
    return 0;
}