#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        unsigned long n;
        cin >> n;
        unsigned long a = sqrt(n);
        while(n % a != 0){
            a--;
        }
        cout << a << " " << n / a << endl;
    }
    return 0;
}