#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> r(n);
        ll sum = 0;
        for(ll& x : r){
            cin >> x;
            sum += x;
        }
        ll y = sum / n;
        ll z1 = abs(sum - y * n);
        ll z2 = abs(sum - (y + 1) * n);
        if(sum % n != 0 && z2 < z1){
            y++;
        } 
        cout << y << endl;
    }
    return 0;
}