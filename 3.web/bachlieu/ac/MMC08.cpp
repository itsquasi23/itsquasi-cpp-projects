//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006];

unordered_map<ll,ll> pos;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    ll mn = LLONG_MAX;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
        if (!pos[a[i]]) pos[a[i]] = i;
        mn = min(mn,a[i]);
    }
    cout << pos[mn];
    return 0;
}