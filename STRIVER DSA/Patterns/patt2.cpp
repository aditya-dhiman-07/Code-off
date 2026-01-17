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
    for (int i = 1;i<=n; i++){
        for(int j = 0;j<i;j++){
            cout<<"# ";
        }
        cout<<endl;
    }
}

void print2(int n){
    for (int i = 1;i<=n; i++){
        for(int j = 0;j<i;j++){
            cout<<j+1;
        }
        cout<<endl;
    }
}
void print3(int n){
    for (int i = 1;i<=n; i++){
        for(int j = 0;j<i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}