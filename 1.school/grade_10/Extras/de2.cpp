//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;
ll y;
ll calc(ll m, ll x, ll k){
    ll t = (m+5)/6;
    return t * (x + k) + (m - t) * x;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll x,k;
    cin >> x >> y >> k; 
    ll l = 1, r = 10000000   ;
    ll res = 1;
    while (l <= r){
        ll mid = (l + r) / 2;
        if (calc(mid,x,k) >= y){
            res = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    cout << res;
    return 0;
}