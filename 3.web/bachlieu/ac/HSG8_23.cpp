//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

ll sum(ll x){
    ll t = 0;
    while (x){
        t += x % 10;
        x /= 10;
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
    int n, c = 0;
    cin >> n;
    while(n--){
        ll a;
        cin >> a;
        ll tg = sqrt(a);
        if (tg * tg != a && sum(a) % 2 == 0) c++;
    }
    cout << c;
    return 0;
}