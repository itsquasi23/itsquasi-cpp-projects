//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006];

const ll mod = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    a[0] = 0;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
        a[i] += a[i - 1];
    }
    ll res = 0;
    for (int i = 1; i <= n; ++i){
        ll s = a[i] - a[i - 1];
        ll t = a[n] - a[i];
        res = (res + s * t) % mod;
    }
    cout << res;
    return 0;
}