//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

ll a[1000006];

ll check(ll x, int m){
    ll t = 0;
    for (int i = 1; i <= m; ++i){
        t += ((a[i] + x - 1) / x);
    }
    return t;
}

int main()
{
    /*if (fopen(".inp","r"))
    {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }*/
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll n;
    int m;
    cin >> n >> m;
    for (int i = 1; i <= m; ++i){
        cin >> a[i];
    }
    ll l = 1, r = 1000000000;
    while (l <= r){
        ll mid = (l + r) / 2;
        if (check(mid, m) > n) l = mid + 1;
        else r = mid - 1;
    }
    cout << r + 1;
    return 0;
}