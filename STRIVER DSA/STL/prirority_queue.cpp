#include <bits/stdc++.h>
using namespace std;

int main() {
    priority_queue <int> pq; //max heap
    pq.push(5);
    pq.push(2);
    pq.push(1);
    pq.push(7);//{7,5,2,1}
    cout<<pq.top()<< " ";
    pq.pop();
    cout<<pq.top();
    priority_queue<int, vector<int> , greater<int>> pq; //min heap
    return 0;
}
// push , pop logn ; top O(1)