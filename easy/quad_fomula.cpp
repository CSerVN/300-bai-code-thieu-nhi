#include <bits/stdc++.h>

using namespace std;

int main(){
    long long a, b, c;
    cin >> a >> b >> c;
    if(a == 0){
        if(b != 0){
            cout << "Phuong trinh co nghiem";
        } else{
            cout << "Phuong trinh vo nghiem";
        }
    } else{
        long long delta = b*b - 4*a*c;
        if (delta < 0) cout << "Phuong trinh vo nghiem";
        else if (delta == 0) cout << "Phuong trinh co nghiem";
        else {
            cout << "Phuong trinh co 2 nghiem phan biet";
        }
    }
    return 0;
}