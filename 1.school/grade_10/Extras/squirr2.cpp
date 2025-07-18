//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

pair<ll,ll> a[1000006];

ll m, n;
ll k;

ll checker(ll mid){
    vector<ll> nuts;
    for (int i = 1; i <= m; ++i){
        if (a[i].first > mid) continue;
        ll c = 1 + (mid - a[i].first) / a[i].second;
        nuts.push_back(c); 
    }
    sort (nuts.begin(), nuts.end(), greater<ll>());
    ll res = 0, size = nuts.size();
    for (int i = 0; i < min(n, size); ++i){
        res += nuts[i];
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    cin >> m >> n >> k;
    for (int i = 1; i <= m; ++i){
        cin >> a[i].first;
    }
    for (int i = 1; i <= m; ++i){
        cin >> a[i].second;
    }
    ll res = 0;
    ll l = 1, r = 1e9, ans = 0;
    while (l <= r){
        int mid = l + r >> 1;
        if (checker(mid) >= k){
            ans = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    cout << ans;
    return 0;
}