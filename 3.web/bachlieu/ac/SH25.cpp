//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

const ll mod = 1e9 + 7;

ll fastpow(ll x, ll y){
    ll res = 1;
    while (y){
        if (y & 1){
            res = res * x % mod;
        }
        x = x * x % mod;
        y /= 2;
    }
    return res;
}

int main()
{
    /*if (fopen(".inp","r"))
    {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }*/
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        ll n,c;
        cin >> n >> c;
        cout << (fastpow(3,n - 1) * c + 2 * (fastpow(3, n - 1) - 1)) % mod << "\n";
    }
    return 0;
}