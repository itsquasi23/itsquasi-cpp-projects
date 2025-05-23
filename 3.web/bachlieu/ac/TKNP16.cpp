//2025 = 45² = (20+25)² = 5²*9² = (1+2+3+4+5+6+7+8+9)² = 1³+2³+3³+4³+5³+6³+7³+8³+9³
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006];
int n, k;

ll bomb(ll r){
    ll bomb = 1;
    ll nx = a[1] + r;
    for (int i = 1; i <= n; ++i){
        if (a[i] > nx){
            bomb++;
            nx = a[i] + r;
        }
    }
    return bomb;
}

int main()
{
    /*if (fopen(".inp","r"))
    {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }*/
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    sort (a + 1, a + 1 + n);
    int l = 1, r = a[n] - a[0] + 1;
    ll res = 0;
    while (l <= r){
        ll mid = (l + r) / 2;
        if (bomb(2 * mid) <= k){
            res = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    cout << res;
    return 0;
}