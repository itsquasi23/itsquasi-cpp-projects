//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

pair<ll,ll> a[1000006];

bool sorter(pair<ll,ll> a, pair<ll,ll> b){
    if (a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll m, n;
    cin >> m >> n;
    for (int i = 1; i <= n; ++i){
        cin >> a[i].first >> a[i].second;
    }
    sort (a + 1, a + 1 + n, sorter);
    ll total = 0;
    for (int i = 1; i <= n; ++i){
        if (a[i].first <= m){
            m -= a[i].first;
            total += a[i].second * a[i].first;
        }
        else {
            total += a[i].second * m;
            m = 0;
        }
    }
    cout << total;
    return 0;
}