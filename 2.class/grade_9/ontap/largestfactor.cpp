// Happy April 30!
// MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

ll pfac(ll x)
{
    ll mx = 0;
    if (x % 2 == 0)
    {
        mx = 2;
        while (x % 2 == 0)
        {
            x /= 2;
        }
    }
    for (ll i = 3; i * i <= x; i += 2)
    {
        if (x % i == 0)
        {
            mx = i;
            while (x % i == 0)
            {
                x /= i;
            }
        }
    }
    if (x > 1)
        mx = max(mx, x);
    return mx;
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
    while (n--)
    {
        ll a;
        cin >> a;
        cout << pfac(a) << "\n";
    }
    return 0;
}