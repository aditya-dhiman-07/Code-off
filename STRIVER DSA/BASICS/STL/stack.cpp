#include <bits/stdc++.h>
using namespace std;
// LIFO - Last In First Out
int main() {
    stack <int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.emplace(5);

    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    cout<<s.empty();
    // swap too
    return 0;
}
// time complexity O(1)