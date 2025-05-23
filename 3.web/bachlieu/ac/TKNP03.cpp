#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    while (k--){
        long long a, res = n * n + 1;
        cin >> a;
        int l = 1, r = n;
        while (l <= r){
            int mid = l + (r - l) / 2;
            if (1LL * mid * mid + 1 >= a){
                res = 1LL * mid * mid + 1;
                r = mid - 1;
            }
            else l = mid + 1;
        }
        cout << res << endl;
    }
    return 0;
}