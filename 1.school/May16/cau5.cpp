//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

ll a[1000006];

ll res[1000006];

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
    for (int t = 1; t <= n; ++t){
        ll mxeh = a[0], mxsf = a[0];
        for (int i = 1; i < t; ++i){
            mxeh = max(a[i], mxeh + a[i]);
            mxsf = max(mxsf, mxeh);
        }
        res[t] = mxsf;
    }
    ll mx = LLONG_MIN;
    for (int t = 1; t <= n; ++t){
        ll mxeh = a[0], mxsf = a[0];
        for (int i = t; i <= n; ++i){
            mxeh = max(a[i], mxeh + a[i]);
            mxsf = max(mxsf, mxeh);
        }
        mx = max(mx, res[t] + mxsf);
    }
    cout << mx;
    return 0;
}