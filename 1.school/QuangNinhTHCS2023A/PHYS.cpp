//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

ll a[3005], f[3005], g[3005];

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
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= i; ++j)
            if (a[j] <= a[i]) ++f[i]; //so phan tu doan [1,i] <= a[i]
        g[i] = n + 1;
        for (int j = i; j <= n; ++j)
            if (a[j] >= a[i]) --g[i];
    }
    ll res = 0;
    for (int i = 1; i < n; ++i){
        for (int j = i + 1; j <= n; ++j)
        res += max({abs(a[i] - a[j]), j - f[i], g[j] - i});
    }
    cout << res;
    return 0;
}