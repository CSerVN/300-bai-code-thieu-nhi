#include <bits/stdc++.h>

using namespace std;

int main(){
    long n;
    cin >> n;
    vector<long> r;
    r.push_back(n);
    long max = 1e6;
    while(n != 1 && max--){
        if(n % 2 == 0){
            n /= 2;
        } else if(n % 2 != 0){
            n = n * 3 + 1;
        }
        r.push_back(n);
    }
    for(long x : r){
        cout << x << " ";
    }
}