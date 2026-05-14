#include <bits/stdc++.h>

using namespace std;

void e0(int& i){
    int r;
    while(i != 0){
        r = i % 10;
        if(r != 0){
            break;
        }
        i /= 10;
    }
}
int main(){
    int n, get, i;
    cin >> n;
    e0(n);
    int sum = 0;
    for(i = n; n != 0; n /= 10){
        get = n % 10;
        sum = sum * 10 + get;
    }
    if(i == sum){
        cout << "YES";
    } else{
        cout << "NO";
    }
}