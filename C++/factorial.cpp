#include <iostream>
int main(){
    using namespace std;
    int n , i , j = 1;
    cin >> n;
    for(i = 1; i<=n; i++ ){
        j = j*i;
    }
    cout << j;
    return 0;
}