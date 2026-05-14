#include <bits/stdc++.h>

using namespace std;

long long ucln(int b, int d){
    while(d != 0){
        long long x = d;
        d = b % d;
        b = x;
    }
    return b;
}
int main(){
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long e = a * d + b * c;
    long long f = b * d;
    cout << e / ucln(e, f) << " " << f / ucln(e, f);
}