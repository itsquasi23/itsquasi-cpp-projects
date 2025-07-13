//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll bin(ll n, ll k){
    ll l = 1, r = 100000000000000000;
    while (l <= r){
        ll mid = l + r >> 1;
        ll m = mid / n;
        ll math = mid - m;
        //cout << math << " ";
        if (math == k){
            if(mid % n == 0) return mid - 1;
            return mid;
        }
        else if (math < k) l = mid + 1;
        else r = mid - 1;
    }
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int m;
    cin >> m;
    while (m--){
        ll n, k;
        cin >> n >> k;
        cout << bin(n, k) << "\n";
    }
    return 0;
}