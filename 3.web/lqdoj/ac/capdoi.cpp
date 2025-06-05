//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006];
unordered_map<ll,ll> cnt;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    ll x;
    cin >> n >> x;
    ll t = 0;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
        t += cnt[x - a[i]];
        cnt[a[i]]++;
    }
    cout << t;
    return 0;
}