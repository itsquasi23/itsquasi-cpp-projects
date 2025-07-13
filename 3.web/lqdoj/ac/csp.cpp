//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006];

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    ll m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    sort (a + 1, a + 1 + n);
    ll res = 0;
    for (int i = 1; i <= n; ++i){
        if (a[i] < m){
        ll tag = m - a[i];
        ll k = upper_bound(a + i + 1, a + 1 + n, tag) - a;
        res += k - i - 1;
        }
    }
    cout << res;
    return 0;
}