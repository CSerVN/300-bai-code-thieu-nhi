#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int> r(n);
        for(int&x : r){
            cin >> x;
        }
        int total = 0;
        for(int i = 0; i < n; i++){
            int each = m / (r[i] + 1);
            int leftover = m % (r[i] + 1);
            total += leftover;
            total += each;       
        }
        cout << total << endl;
    }
    return 0;
}