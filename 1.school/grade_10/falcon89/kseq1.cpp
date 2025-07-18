//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006];

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    sort (a + 1, a + 1 + n);
    ll res = LLONG_MAX;
    for (int i = 1; i <= n - k; ++i){
        ll l = a[i];
        ll r = a[i + k - 1];
        res = min(res, r - l);
    }
    cout << res;
    return 0;
}