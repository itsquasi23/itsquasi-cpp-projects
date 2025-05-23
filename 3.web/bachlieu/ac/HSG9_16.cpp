//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

ll tp(ll x){
    if (x % 2 == 0) return x / 2;
    if (x % 3 == 0) return x / 3;
    for (ll i = 5; i * i <= x; i += 6){
        if (x % i == 0) return x / i;
        if (x % (i + 2) == 0) return x / (i + 2);
    }
    return -1;
}

int main()
{
    /*if (fopen(".inp","r"))
    {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }*/
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll x;
    cin >> x;
    cout << tp(x);
    return 0;
}