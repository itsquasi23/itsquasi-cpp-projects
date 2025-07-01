//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

ll f(ll n){
    ll t = 1;
    for (int i = 2; i * i <= n; ++i){
        t += (i + n / i) * (n % i == 0) - i * (i * i == n);
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
    ll a,b;
    cin >> a >> b;
    int t = 0;
    for (int i = a; i <= b; ++i){
        if (i < f(i)) ++t;
    }
    cout << t;
    return 0;
}