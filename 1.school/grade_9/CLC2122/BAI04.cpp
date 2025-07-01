//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006];
unordered_map<ll,ll> cnt;

bool bt(ll x){
    if (x <= 11) return 0;
    ll t = 0;
    while(x){
        t = x % 10;
        x /= 10;
        if (x % 10 > t) return 0;
    }
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll n,k;
    cin >> n >> k;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
        cnt[a[i]]++;
    }
    bool f;
    while (k--){
        ll b;
        cin >> b;
        if (bt(cnt[b])){
            cout << b << " " << cnt[b] << "\n";
            f = 1;
        }
    }
    if (!f) cout << "0 0";
    return 0;
}