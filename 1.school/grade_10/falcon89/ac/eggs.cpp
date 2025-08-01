//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006];

ll check(ll mid, int n){
    ll bx = 1, k = mid;
    for (int i = 1; i <= n; ++i){
        if (k < a[i]){
            k = mid;
            bx++;
        }
        k -= a[i];
    }
    return bx;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n, m;
    cin >> n >> m;
    ll l = 1, r = 0;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
        l = max(l, a[i]);
        r += a[i];
    }
    ll res = 0;
    while (l <= r){
        ll mid = l + r >> 1;
        //cout << check(mid, n) << " ";
        if (check(mid, n) <= m){
            res = mid;
            r = mid - 1;
            //cout << res << "\n";
        }
        else l = mid + 1;
    }
    cout << res;
    return 0;
}