//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

int d(ll x){
    int t = 2;
    for (int i = 2; i * i <= x; ++i){
        t += 2 * (x % i == 0) - (i * i == x);
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
    int n;
    cin >> n;
    int odd = 0, even = 0;
    while (n--){
        ll t;
        cin >> t;
        if (d(t) & 1) odd++;
        else even++;
    }
    cout << even << "\n" << odd;
    return 0;
}