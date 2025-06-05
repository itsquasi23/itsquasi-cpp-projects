//Chasing the goal...
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

ll fastpow(ll x, ll y){
    ll res = 1;
    while (y){
        if (y & 1) res = (res * x);
        x = x * x, y /= 2;
    }
    return res;
}

ll fastmul(ll x, ll y, ll mod){
    ll res = 0;
    while (y){
        if (y & 1) res = (res + x) % mod;
        x = x * 2 % mod, y /= 2;
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
    ll a,b;
    cin >> a >> b;
    cout << fastpow(a,b);
    return 0;
}