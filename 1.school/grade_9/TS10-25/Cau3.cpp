//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;
ll gcd(ll a, ll b) {
    while (b != 0) {
        ll r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll c,d;
    cin >> c >> d;
    if (d % (c) != 0) {
        cout << -1;
        return 0;
    }
    ll res = LLONG_MAX , t = d/(c);
    bool f = 0;
     for (ll i = 1; i * i <= t; ++i) {
        if (t % i == 0) {
            ll x = i;
            ll y = t / i;
            if (gcd(x, y) == 1) {
                ll sum = c * (x + y);
                if (sum < res) res = sum , f = 1;
            }
        }
    }
    if(f)
    cout << res;
    else cout << -1;
    return 0;
}