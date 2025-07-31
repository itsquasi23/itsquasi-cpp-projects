//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll itsquasi(ll x){
    return (x + 1) * x / 2;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll n;
    cin >> n;
    ll l = 1, r = 1e10, res = 0;
    while (l <= r){
        ll mid = l + r >> 1;
        if (itsquasi(mid) >= n){
            res = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    cout << res;
    return 0;
}