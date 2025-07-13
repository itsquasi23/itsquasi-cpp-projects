//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[10006];

ll prime(ll x){
    if (x == 2 || x == 3) return 1;
    if (x < 3 || x % 2 == 0 || x % 3 == 0) return 0;
    for (int i = 5; i * i <= x; i += 6){
        if (x % i == 0 || x % (i + 2) == 0) return 0;
    }
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll n,t;
    cin >> n >> t;
    ll p,q,m;
    cin >> p >> q >> m;
    a[0] = 0;
    for (int i = 1; i <= n; ++i){
        ll ans = ((p % m) * (i % m)) % m + q;
        if (prime(ans)) a[i] = a[i - 1] + 1;
        else a[i] = a[i - 1];
    }
    while (t--){
        ll l,r;
        cin >> l >> r;
        cout << a[r] - a[l - 1] << "\n";
    }
    return 0;
}