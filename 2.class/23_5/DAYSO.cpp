//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

ll a[1000006];

unordered_map<ll,ll> first_pos;

int main()
{
    /*if (fopen(".inp","r"))
    {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }*/
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll n;
    cin >> n;
    a[0] = 0; // base case for prefix sum
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
        if (!first_pos.count(a[i])) {
            first_pos[a[i]] = a[i - 1];
        }
        a[i] += a[i - 1];
    }

    ll mx = LLONG_MIN;
    for (int i = 1; i <= n; ++i){
        mx = max(mx, a[i] - first_pos[a[i] - a[i - 1]]);
    }
    cout << mx;
    return 0;
}