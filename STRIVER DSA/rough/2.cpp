#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;

    int x = a[0];
    if(x <96) cout<<a;
    else{
        a[0] = a[0] - 32;
        cout<<a;
    }
return 0;
}