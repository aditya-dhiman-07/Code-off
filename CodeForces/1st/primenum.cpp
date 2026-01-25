#include <bits/stdc++.h>
using namespace std;

void perfsq(int n){
    if(n>=20){
        for (int x = 1 ;x<=20;x++){
            cout << x <<endl;
        }
    }
    else if(n<=20&&n>=1){
        for (int x = 1 ;x<=n;x++){
            cout << x<<endl;
        }
    }
    else exit;
}

int main(){
    int t;
    cin>>t;
    if (t>=1&&t<=20){
        for (int i = 0;i<t;i++){
            int n;
            cin>>n;
            perfsq(n);
        }
    }
    else return 0;
    return 0;
}