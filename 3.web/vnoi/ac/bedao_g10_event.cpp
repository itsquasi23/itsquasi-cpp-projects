//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006], sum[1000006];

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    sort (a + 1, a + 1 + n, greater<ll>());
    sum[0] = 0;
    for (int i = 1; i <= n; ++i){
        sum[i] = sum[i - 1] + a[i];
    }
    while (q--){
        ll c, k;
        cin >> c >> k;
        ll upd = c / (k + 1);
        ll s = 0;
        for (int i = 1; i <= c; ++i){
            if (upd){
                s += a[i];
                upd--;
            }
            else break;
        }
        cout << s + sum[c] << "\n";
    }
    return 0;
}