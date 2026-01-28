#include <bits/stdc++.h>
using namespace std;

int main() {
    pair<int ,int> p1 = {5,6};
    cout<<p1.first<<" "<<p1.second;
    //nested pair
    pair<int,pair<char,char>> p2 = {5,{'a','b'}};
    cout<<p2.second.first<<p2.second.second<<p2.first;
    return 0;
}