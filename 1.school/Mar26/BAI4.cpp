//2025 = 45² = (20+25)² = 5²*9² = (1+2+3+4+5+6+7+8+9)² = 1³+2³+3³+4³+5³+6³+7³+8³+9³
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006];

ll find(ll n, ll k){
    ll s = 0;
    for (int i = 1; i <= n; ++i){
        if (a[i] > k) s += a[i] - k;
    }
    return s;
}

int main()
{
    /*if (fopen(".inp","r"))
    {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }*/
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    //Code goes here:
    ll n,s;
    cin >> n >> s;
    ll l = 1, r = LLONG_MIN;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
        r = max(r,a[i]);
    }
    ll res = 0;
    while (l <= r){
        ll mid = (l + r) / 2;
        if (find(n,mid) >= s){
            res = mid;
            l = mid + 1;
        }
        else r = mid - 1;
    }
    cout << res;
    return 0;
}