//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

ll a[1000006], mn[1000006];

ll res = 0;

void search(ll i, ll p){
    int l = 1, r = i - 1;
    while (l <= r){
        int j = (l + r) / 2;
        if (a[i] - mn[j] >= p){
            res = max(res, i - j);
            r = j - 1;
        }
        else l = j + 1;
    }
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
    ll p;
    cin >> n >> p;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    mn[1] = a[1];
    for (int i = 2; i <= n; ++i){
        mn[i] = min(mn[i - 1], a[i]);
    }
    for (int i = 2; i <= n; ++i){
        search(i,p);
    }
    cout << res;
    return 0;
}