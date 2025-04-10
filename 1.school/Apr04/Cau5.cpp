//2025 = 45² = (20+25)² = 5²*9² = (1+2+3+4+5+6+7+8+9)² = 1³+2³+3³+4³+5³+6³+7³+8³+9³
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[100005], b[100005];

ll cook(ll m, ll n, ll val){
    ll mn = LLONG_MAX;
    for (int i = 1; i <= m; ++i){
        int s = 1;
        for (int j = s; j <= n; ++j){
        if (a[i] <= val) a[i] += b[j];
        mn = min(mn, a[i]);
        s = j;
        break;
        }
    }
    return mn;
}

int main()
{
    /*if (fopen(".inp","r"))
    {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }*/
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    //Code goes here:
    int m;
    cin >> m;
    ll bruh = 0;
    for (int i = 1; i <= m; ++i){
        cin >> a[i];
    }
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i){
        cin >> b[i];
    }
    ll res = 0;
    int l = 1, r = 100000000;
    while (l <= r){
        int mid = (l + r) / 2;
        if (cook(m,n,mid) <= mid){
            r = mid - 1;
        }
        else res = mid, l = mid + 1;
    }
    cout << res;
    return 0;
}