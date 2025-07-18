//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006];
ll f1[1000006], f2[1000006] , l[1000006] , r[1000006];

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    int res1 = 0, res2 = 0;
    for (int i = 1; i <= n; ++i){
        int j = lower_bound(f1 + 1, f1 + res1 + 1, a[i]) - f1;
        f1[j] = a[i];
        res1 = max(res1, j);
        l[i] = res1;
    }
    for (int i = n; i >= 1; --i){
        int j = lower_bound(f2 + 1, f2 + res2  + 1, a[i]) - f2;
        f2[j] = a[i];
        res2 = max(res2, j);
        r[i] = res2;
    }
    ll ans = 0;
    for(int i = 1;i <= n; ++i)
        ans = max(ans*1LL ,min( l[i],r[i])*2 - 1);
    cout << ans;
    return 0;
}