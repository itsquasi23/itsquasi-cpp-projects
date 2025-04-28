//Chasing the goal...
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

ll a[1000006];

ll check(ll n, ll mid){
    ll c = 0;
    for (int i = 1; i <= n; ++i){
        c += (a[i] / mid);
    }
    return c;
}

int main()
{
    /*if (fopen(".inp","r"))
    {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }*/
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    ll k;
    cin >> n >> k;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    ll l = 1, r = 1000000000;
    int t = 0;
    while (l <= r){
        ll mid = l + r >> 1;
        if (check(n,mid) >= k) t = mid, l = mid + 1;
        else r = mid - 1;
    }
    cout << t;
    return 0;
}