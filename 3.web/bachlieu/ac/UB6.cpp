//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll uoc(ll n){
    ll t = 1 + n;
    for (int i = 2; i * i <= n; ++i){
        t += (i + n / i) * (n % i == 0) - i * (i * i == n);
    }
    return t;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll a,b;
    cin >> a >> b;
    if (uoc(a) == b || uoc(b) == a) cout << 1;
    else cout << 0;
    return 0;
}