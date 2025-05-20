//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

ll f[1000006], g[1000006];

int main()
{
    /*if (fopen(".inp","r"))
    {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }*/
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n, k;
    cin >> n >> k;
    string a;
    cin >> a;
    a = ' ' + a;
    for (int i = 1; i <= n; ++i) if (a[i] == '1') f[i] = f[i - 1] + 1;
    for (int i = n; i >= 1; --i) if (a[i] == '1') g[i] = g[i + 1] + 1;
    ll res = 0;
    for (int i = 1; i <= n - k + 1; ++i) res = max(res, f[i - 1] + k + g[i + k]);
    cout << res;
    return 0;
}