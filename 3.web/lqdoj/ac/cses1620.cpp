//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006];

ll check(ll mid, int n, ll t){
    ll cnt = 0;
    for (int i = 1; i <= n; ++i){
        cnt += mid / a[i];
        if(cnt > t){
            return t + 1;
        }
    }
    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    ll t;
    cin >> n >> t;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    ll l = 1, r = 1000000000000000000;
    ll res = 0;
    while (l <= r){
        ll mid = l + r >> 1;
        if (check(mid, n, t) >= t){
            res = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    cout << res;
    return 0;
}