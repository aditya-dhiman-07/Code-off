#include <bits/stdc++.h>
using namespace std;
bool isprime(int n){
    if(n <= 1) return false;

    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        if(n%2==0){
            cout<<n/2 <<((n/2)-1)<<1<<endl;
        }
        if(n%2==1){
            int k;
            for (int i = 2; i < n/2; i++)
            {
                if(n%i==0&&isprime(n%i)){
                    k = n%i; 
                    break;
                }
            }
            if(k!=1){
                int m = n/k;
                cout<<(m-2)*k<<2*k<<k;
                break;
            }
            int j;
            for (int i = 3; i<n/2 ; i++)
            {
                if(n%i!=0&&isprime(n%i)){
                    j = n%i; 
                    break;
                }          
            }
                
                    cout<< n-j-1 << j <<1;
                }
            
            
        }
    return 0;
}