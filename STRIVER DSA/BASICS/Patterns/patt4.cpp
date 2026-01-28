#include <bits/stdc++.h>
using namespace std;

void print1(int n);
void print2(int n);
void print3(int n);
void print4(int n);

int main(){
    int n ;
    cout << "Enter the value of n : ";
    cin >> n;
    print4(n);
    return 0;
}

void print1(int n){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<2*(n-i)-1;j++){
            cout<<" ";
        }
        for(int j = 0;j<2*i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void print2(int n){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<2*i+1;j++){
            cout<<" ";
        }
        for(int j = 0;j<2*(n-i)-1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void print3(int n){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<2*(n-i)-1;j++){
            cout<<" ";
        }
        for(int j = 0;j<2*i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i = 1;i<n;i++){
        for(int j = 0;j<2*i+1;j++){
            cout<<" ";
        }
        for(int j = 0;j<2*(n-i)-1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }   
}
void print4(int n){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i = 1;i<n;i++){
        for(int j = 0;j<=(n-i)-1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }   
}