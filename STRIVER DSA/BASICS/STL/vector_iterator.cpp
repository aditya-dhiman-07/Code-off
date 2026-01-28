#include <bits/stdc++.h>
using namespace std;

int main() {
    vector <int> v(5);
    v = {5,6,7,5,6};
    // cout<<v[1]<<" "<<v.at(0);

    vector<int>::iterator it1 = v.begin();
    vector<int>::iterator it2 = v.end();
    // vector<int>::iterator it4 = v.rend();
    // vector<int>::iterator it3 = v.rbegin();
    // for(vector<int>::iterator it = v.begin();it != v.end();it++) 
    // {
    //     cout<< *(it) << " ";
    // }
    // for(auto it = v.begin();it != v.end();it++) 
    // {
    //     cout<< *(it) << " ";
    // }
    v.erase(v.begin() +1,v.begin() + 3);
    v.insert(v.begin(),8);
    v.insert(v.begin()+2,2,5);
    vector<int>copy(2,6);
    v.insert(v.begin()+4,copy.begin(),copy.end());
    int j = v.size();
    cout<<j<<endl;
    v.pop_back();
    v.swap(copy);
    v.clear();
    cout<<v.empty();
    for(auto it : v) 
    {
        cout<< it << " ";
    }
    return 0;
}