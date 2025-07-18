//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006];
ll x[1000006], y[1000006];

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    ll mn = LLONG_MAX, mx = LLONG_MIN;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
    }
    int t = 1;
    for (int i = 1; i <= n; ++i){
        x[i] = x[i - 1] + (a[i] == mx);
        y[i] = y[i - 1] + (a[i] == mn);
    }
    int l = 1, r = 1;
    while (a[l] != mx) l++;
    while (a[r] != mn) r++;
    if (l > r) swap(l, r);
    int res = r - l + 1;
    while (l <= n && r <= n){
        while (x[r] - x[l - 1] >= 1 && y[r] - y[l - 1] >= 1) {
            res = min(res , r - l + 1);
            l++;
            continue;
        }
        r++;
    }
    cout << res;
    return 0;
}