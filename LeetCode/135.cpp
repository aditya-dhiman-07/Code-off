#include <bits/stdc++.h>
using namespace std;
int getSum(int n) {
    if (n == 0) 
        return 0;
    return n + getSum(n - 1);
}
int candy(vector<int>& ratings) {
    int n = ratings.size();
    int count;
    int i = 0;
    int mincandy = n;
    int a=0,d=0;
    int asum = 0;
    int dsum = 0;
    int aeqsum = 1;
    int deqsum = 1;

    while(1){
        if(i>=n) break;
        while(ratings[i]<ratings[i+1]&i<n-1){
            asum++;
            i++;
        }
        i++;
        while(ratings[i]=ratings[i+1]){
            aeqsum++;
            i++;
        }
        while(ratings[i]>ratings[i+1]&i<n-1){
            dsum++;
            i++;
        }
        i++;
        while(ratings[i]=ratings[i+1]){
            deqsum++;
            i++;
        }
        if(asum<=dsum){
            a = getSum(asum)+(dsum-asum+1);
        }
        a = getSum(asum)+ ((aeqsum-1)*(asum-1));
        d = getSum(dsum)+ ((deqsum-1)*(dsum-1));
        mincandy = mincandy+a+d;
        a=0,d=0;
        asum = 0;
        dsum = 0;
        aeqsum = 1;
        deqsum = 1;
    }
    return mincandy;
    
}
int main() {
    vector<int> ratings ;
    return 0;
}