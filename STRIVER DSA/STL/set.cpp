#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s;// unique and sorted
    s.insert(1);
    s.emplace(2);
    s.insert(4);
    s.insert(3);
    auto it = s.find(4);
    cout<<&it<<endl;
    auto it2 = s.find(5);
    cout<<&it2;
    s.erase(1);//log n time
    cout<<s.count(4);
    s.erase(it); //takes constant time

    // Multiset
    multiset <int> ms; // only sorted not unique
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.erase(1);// erases all the occurances of one
    ms.erase(ms.find(1));// erases only one of the occurances of one

    //Unordered set
    unordered_set <int> us;//unsorted but unique
    us.insert(1);
    us.insert(4);
    us.insert(5);
    us.insert(9);
    // in most of the cases O(1) time : in worst case O(n)
    //  Upper Bound and lowerbound doesn't work
    return 0;
}

    