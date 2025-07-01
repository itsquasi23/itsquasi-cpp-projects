// Goal: Get into CLC
// MΔDE BY ITSQUΔSI
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
    ll n;
    cin >> n;
    if (n == 3)
        cout << 1;
    else
    {
        ll range = (n - 2) / 2;
        bool even = 1;
        if (n & 1)
            even = 0;
        cout << range * (range + 1) + (even ? 0 : range + 1);
    }
    return 0;
}