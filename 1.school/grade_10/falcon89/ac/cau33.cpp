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
    ll mx = 0;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    sort(a + 1, a + 1 + n);
    ll mxt = 0;
    for (int i = 1; i <= mx; ++i){
        ll t1 = upper_bound(a + 1, a + 1 + n, i) - a;
        ll t2 = lower_bound(a + 1, a + 1 + n, i) - a;
        t1 = n - t1 + 1;
        if (a[t2] == i) t1++;
        mxt = max(mxt, i * t1);
    }
    cout << mxt;
    return 0;
}