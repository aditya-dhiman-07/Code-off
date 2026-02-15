#include <bits/stdc++.h>
using namespace std;
//hashing for characters
int main() {

    string s ;
    cin>>s;

    map<char,int>mpp;
    for (int i = 0; i<s.size();i++){
        mpp[s[i]]++;
    }

    int q;
    cout<<"Enter number of queries:";
    cin >> q;
    while(q--){
        char ch;
        cout<< "ENTER QUERY : ";
        cin >> ch;
        cout<< mpp[ch] <<endl;
    }

    return 0;
}