#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> r(n);
    for(int& x : r){
        cin >> x;
    }
    int sum = 0;
    int diff = 0;
    for(int i = 0; i < n; i++){
        if(i % 2 != 0) sum += r[i];
        else diff += r[i];
    }
    cout << sum - diff;
    return 0;
}