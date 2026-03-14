#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> a(n);
        int sum = 0;
        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            sum += a[i];
            if(a[i]%3 == 1) cnt++;
        }

        int r = sum%3;
        if(r==0) cout<<0;
        else if(r==2) cout<<1;
        else{
            if(cnt > 0) cout<<1;
            else cout<<2;
        }
    }
    return 0;
}