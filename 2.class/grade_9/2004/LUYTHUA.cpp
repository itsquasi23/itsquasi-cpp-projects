//Chasing the goal...
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

const ll mod = 1e9;

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
    ll a,b,x,y;
    cin >> a >> b >> x >> y;
    cout << fastpow(a,x) + fastpow(b,y);
    return 0;
}