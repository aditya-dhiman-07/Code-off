#include <bits/stdc++.h>
using namespace std;

void print1(int n);
void print2(int n);

int main(){
    int n ;
    cout << "Enter the value of n : ";
    cin >> n;
    print2(n);
    return 0;
}

void print1(int n){
    for(int i = 0;i<=n;i++){ //for(int i = n;i>0;i--)
        for(int j = 0; j<n-i+1;j++){ //for(int j = 0; j<i;j++)
            cout<<"* ";
        }
        cout<<endl;
    }
}

void print2(int n){
    for(int i = 0;i<=n;i++){ //for(int i = n;i>0;i--)
        for(int j = 1; j<n-i+1;j++){ //for(int j = 0; j<i;j++)
            cout<<j <<" " ; //cout<<j+1;
        }
        cout<<endl;
    }
}