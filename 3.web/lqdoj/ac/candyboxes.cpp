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
    cin >> n;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
        a[i] += a[i - 1];
    }
    int k;
    cin >> k;
    while (k--){
        ll t;
        cin >> t;
        ll l = lower_bound(a + 1, a + 1 + n, t) - a;
        cout << l << "\n";
    }
    return 0;
}