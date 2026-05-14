#include <iostream>
#include <vector>
#include <algorithm>    
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    vector<long long> r(n);
    vector<bool> check(k, false);
    for(long long& x : r) cin >> x;
    int count = 0;
    for(long long i = 0; i < n; i++) {
        long long rmd = r[i] % k;
        if(!check[rmd]) {
            count++;
            check[rmd] = true;
        }
    }
    cout << count;
    return 0;
}