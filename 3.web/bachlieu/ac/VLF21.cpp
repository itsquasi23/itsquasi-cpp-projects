//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll kien(ll n){
    ll t = 1;
    for (int i = 2; i * i <= n; ++i){
        t += (i + n / i) * (n % i == 0) - i * (i * i == n);
    }
    return t;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll n;
    cin >> n;
    if (kien(n) == n) cout << "YES";
    else cout << "NO";
    return 0;
}