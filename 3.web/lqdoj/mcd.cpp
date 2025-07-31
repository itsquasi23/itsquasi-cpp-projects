//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll sum(ll x){
    ll t = 0;
    while (x){
        t += x % 10;
        x /= 10;
    }
    return t;
}

ll fnd(ll x){
    ll t = 0;
    for (int i = 1; i * i <= x; ++i){
        if (x % i == 0){
            t = max({t, sum(i), sum(x / i)});
        }
    }
    return t;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll a, b;
    cin >> a >> b;
    ll t = gcd(a, b);
    cout << fnd(t);
    return 0;
}