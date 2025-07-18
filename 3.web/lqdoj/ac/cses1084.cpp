//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006], b[1000006];

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n, m;
    ll k;
    cin >> n >> m >> k;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    for (int i = 1; i <= m; ++i){
        cin >> b[i];
    }
    int t = 0;
    sort (a + 1, a + 1 + n);
    sort (b + 1, b + 1 + m);
    for (int i = 1; i <= n; ++i){
        int l = lower_bound(b + 1, b + 1 + m, a[i] - k) - b;
        int r = upper_bound(b + 1, b + 1 + m, a[i] + k) - b - 1;
        if (l <= r){
            t++;
            b[l] = -1;
        }
    }
    cout << t;
    return 0;
}