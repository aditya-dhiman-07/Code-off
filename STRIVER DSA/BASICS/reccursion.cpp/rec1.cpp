#include <bits/stdc++.h>
using namespace std;
void printname(int n,string name);
int main() {
    int n;
    cin>>n;
    n = abs(n);
    string name;
    cin>>name;
    printname(n,name);
    return 0;
}
void printname(int n,string name){
    if (n == 0) return;
    cout<<name<<endl;
    printname(n-1,name);
}
