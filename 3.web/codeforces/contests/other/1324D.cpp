//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006], b[1000006];

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) cin >> a[i];
    for (int i = 1; i <= n; ++i) cin >> b[i], b[i] = a[i] - b[i];
    sort(b + 1, b + 1 + n);
    ll res = 0;
    for (int i = 1; i <= n; ++i){
        if (b[i] <= 0) continue;
        int t = lower_bound(b + 1, b + 1 + n, -b[i] + 1) - b;
        res += i - t;
    }
    cout << res;
    return 0;
}