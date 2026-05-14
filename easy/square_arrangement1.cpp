#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        unsigned long long n;
        cin >> n;

        unsigned long long root_n = static_cast<unsigned long long>(sqrt(n));
        if (root_n * root_n == n) {
            cout << root_n << " " << root_n << endl;
        } else {
            unsigned long long a = 1, b = n;

            for (unsigned long long i = 1; i * i <= n; ++i) {
                if (n % i == 0) {
                    unsigned long long x = i;
                    unsigned long long y = n / i;

                    if (x > y) swap(x, y);

                    if (y - x < b - a) {
                        a = x;
                        b = y;
                    }
                }
            }
            cout << a << " " << b << endl;
        }
    }
    return 0;
}
