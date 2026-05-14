#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> r(n + 1);
    for(int i = 1; i <= n; i++){
        cin >> r[i];
    }
    int min = n;
    for(int i = 1; i <= n; i++){
        if(r[i] != 0 && r[i] <= k && i != m){ 
            int tmp = abs(i - m);  
            if(tmp < min){   
                min = tmp;
            }
        } 
    }
    if(min != n){
        cout << min * 10;
    } else {
        cout << -1;
    }
    return 0;
}