//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006];

ll fastpow(ll x, ll y){
    ll res = 1;
    while (y){
        if (y & 1){
            res *= x;
        }
        x *= x;
        y /= 2;
    }
    return res;
}

ll hh(ll x){
    if (x == 1) return 1;
    ll t = 1;
    for (int i = 2; i * i <= x; ++i){
        ll c = 0;
        while (x % i == 0){
            x /= i;
            c++;
        }
        t *= (fastpow(i,c + 1) - 1) / (i - 1);
    }
    if (x > 1) t *= (x * x - 1) / (x - 1);
    return t;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n,t = 0,c = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
        if (a[i] == hh(a[i])) ++t;
    }
    cout << t << "\n";
    t = 0;
    for (int j = 1; j <= n; ++j){
        if (a[j - 1] < a[j]) t++;
        else {
            c = max(c,t);
            t = 0;
        }
    }
    cout << c;
    return 0;
}