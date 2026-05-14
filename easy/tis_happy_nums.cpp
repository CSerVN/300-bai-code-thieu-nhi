#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int arr[n];
    int arr1[m];
    for(int &x : arr){
        cin >> x;
    } 
    for(int &y : arr1){
        cin >> y;
    } 
    int a = INT_MAX;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int tmp;
            if(arr[i] < arr1[j]) tmp = arr[i] * 10 + arr1[j];
            else if(arr[i] == arr1[j]) tmp = arr[i];
            else tmp = arr1[j] * 10 + arr[i];
            a = min(a, tmp);
        }
    }
    cout << a;
    return 0;
}