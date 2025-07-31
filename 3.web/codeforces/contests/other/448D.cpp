//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll m, n, k;

ll finder(ll x){
    ll res = 0;
    for (int i = 1; i <= n; ++i){
        res += min(x / i, m);
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    cin >> m >> n >> k;
    ll l = 1, r = m * n, ans = 0;
    while (l <= r){
        ll mid = l + r >> 1;
        if (finder(mid) >= k){
            ans = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    cout << ans;
    return 0;
}