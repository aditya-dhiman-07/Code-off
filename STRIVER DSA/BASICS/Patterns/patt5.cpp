#include <bits/stdc++.h>
using namespace std;

void print1(int n);
void print2(int n);
void print3(int n);

int main(){
    int n ;
    cout << "Enter the value of n : ";
    cin >> n;
    print3(n);
    return 0;
}

void print1(int n){
    for (int i = 0;i<n;i++){
        int start;
        if (i%2==0){
            start = 1;
        }
        else {
            start = 0;
        }
        for (int j = 0;j<=i;j++){
            cout << start;
            start = 1-start;
        }
        cout<<endl;
    }
}
void print2(int n){
    for (int i = 1;i<=n; i++){
        for(int j = 0;j<i;j++){
            cout<<j+1;
        }
        for(int j = 0;j<2*(n-i);j++){
            cout<<" ";
        }
        for(int j = 0;j<i;j++){
            cout<<i-j;
        }
        cout<<endl;
    }
}
void print3(int n){
    for (int i = 1;i<=n; i++){
        static int scam = 1; 
        for(int j = 1;j<=i;j++){
            cout<<scam <<" ";
            scam++;
        }
        cout<<endl;
    }
}
