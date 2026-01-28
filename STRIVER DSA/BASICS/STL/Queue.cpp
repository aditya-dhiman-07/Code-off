#include <bits/stdc++.h>
using namespace std;
//FIFO - First In First Out
int main() {
    queue <int> q;
    q.push(5);
    q.push(9);
    q.push(13);
    q.back()+=1;
    cout<<q.back();
    q.pop();
    cout<<q.front();
    return 0;
}