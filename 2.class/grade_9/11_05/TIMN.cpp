//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

int main()
{
    /*if (fopen(".inp","r"))
    {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }*/
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll t;
    cin >> t;
    t = 2 * (t - 2025);
    for (int i = 1; i * i <= t; ++i){
        if (i * (i + 1) == t){
            cout << i;
            return 0;
        }
    }
    cout << -1;
    return 0;
}