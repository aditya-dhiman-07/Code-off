#include <iostream>
using namespace std;
void counter(int s,int k,int m){
    int ans = s-(m%k);
    if ((s<k)&(m%k)>s){
        cout<<0;
    }
    else{
    cout<< ans;
    }
    }
void test(int t){
    for(int i = 0;i<t;i++){
        int x,y,z;
        cin>> x >> y >>z;
        counter(x,y,z);
    }
}
int main(){
    int t;
    cin>>t ;
    test(t);
    
    return 0;
}