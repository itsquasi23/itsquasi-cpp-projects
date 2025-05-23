#include<bits/stdc++.h>

using namespace std;

long long a[100005];

int main(){
    int n;
    long long x;
    cin >> n >> x;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    int l = 1, r = n;
    while (l <= r){
        int mid = l + (r - l) / 2;
        if (a[mid] == x){
            cout << "Y";
            return 0;
        }
        if (a[mid] < x) l = mid + 1;
        else r = mid - 1; 
    }
    cout << "N";
    return 0;
}