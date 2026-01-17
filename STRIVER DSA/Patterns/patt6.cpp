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
    for (int i = 0;i<n; i++){
        for(char ch = 'A';ch<='A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void print2(int n){
    for (int i = 0;i<n; i++){
        for (int j = 0; j<2*(n-i-1);j++){
            cout<<" ";
        }
        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for(int j = 0;j<2*i+1;j++){
            cout<<ch<<" ";
            if(j<breakpoint) ch++;
            else ch--;
        }
        cout<<endl;
    }
}