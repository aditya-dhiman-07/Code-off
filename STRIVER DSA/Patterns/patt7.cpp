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
    for (int i = 0;i<n; i++){
        for (int j = i;j<n;j++){
            cout<<"*"<<" ";
        }
        for (int j = 0;j<4*i;j++){
            cout<<" ";
        }
        for (int j = i;j<n;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    for (int i = 0;i<n; i++){
        for (int j = n-i-1;j<n;j++){
            cout<<"*"<<" ";
        }
        for (int j = 0;j<4*(n-i-1);j++){
            cout<<" ";
        }
        for (int j = n-i-1;j<n;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
void print2(int n){

    for (int i = 0;i<n; i++){
        for (int j = n-i-1;j<n;j++){
            cout<<"*"<<" ";
        }
        for (int j = 0;j<4*(n-i-1);j++){
            cout<<" ";
        }
        for (int j = n-i-1;j<n;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    for (int i = 0;i<n; i++){
        for (int j = i;j<n-1;j++){
            cout<<"*"<<" ";
        }
        for (int j = 0;j<4*(i+1);j++){
            cout<<" ";
        }
        for (int j = i;j<n-1;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
void print3(int n){
    for (int i = 0;i<n;i++){
        if (i==n-1||i==0){
            for (int j=0;j<n;j++){
                cout<<"*"<<" ";
            }
            cout<<endl;
        }
        else{
            cout <<"*"<<" ";
            for (int j = 0;j<2*(n-2);j++){
                cout<<" ";
            }
            cout<<"*"<<endl;
            }
    }
}
