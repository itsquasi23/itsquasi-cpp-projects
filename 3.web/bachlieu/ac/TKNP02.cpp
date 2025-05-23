#include<bits/stdc++.h>

using namespace std;

long long a[100005];

int main(){
    int n,t;
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    cin >> t;
    while (t--){
    long long x;
    cin >> x;
    int l = 1, r = n, found = 0;
    while (l <= r){
        int mid = l + (r - l) / 2;
        if (a[mid] == x){
            cout << "Y\n";
            found = 1;
            break;
        }
        if (a[mid] < x) l = mid + 1;
        else r = mid - 1; 
    }
    if (found == 0) cout << "N\n";
    }
    return 0;
}