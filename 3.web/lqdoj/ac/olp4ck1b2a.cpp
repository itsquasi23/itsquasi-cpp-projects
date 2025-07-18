//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<pair<ll,ll>> b1, b0;
ll cnt[1000006];

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    ll s;
    cin >> n >> s;
    for (int i = 1; i <= n; ++i){
        ll w, v, c;
        cin >> w >> v >> c;
        if (!c) b0.push_back({w, v});
        else b1.push_back({w, v});
    }
    sort (b0.begin(), b0.end());
    ll res = 0, p = 0;
    for (int i = 0; i < b1.size(); ++i)
        res += b1[i].second, p += b1[i].first;
    for (int i = 1; i <= b0.size(); ++i)
        cnt[i] = max(cnt[i - 1], b0[i - 1].second);
    ll rres = res;
    for (int i = 0; i < b1.size(); ++i){
        int l = 0, r = b0.size() - 1;
        ll x = p - b1[i].first, y = res - b1[i].second;
        ll pos = s - x, val = -1;
        while (l <= r){
            int mid = l + r >> 1;
            if (b0[mid].first > pos) r = mid - 1;
            else val = mid, l = mid + 1;
        }
        rres = max(rres, y + cnt[val + 1]);
    }
    cout << rres;
    return 0;
}