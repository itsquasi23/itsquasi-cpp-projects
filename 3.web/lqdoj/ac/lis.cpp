// Welcome to your new home, CLCer ItsQuasi!
// MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define maxn 30005
using namespace std;
int n, a[maxn], dp[maxn], bit[1000005], cnt[1000005];
void upd(int u, int val, int v)
{
    for (int i = u; i <= 1000000; i += i & (-i))
        bit[i] = max(bit[i], val);
}
int query(int u)
{
    int res = INT_MIN;
    for (int i = u; i >= 1; i -= i & (-i))
        res = max(res, bit[i]);
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    /*cin >> n;
    for(int i = 1;i <= n; ++i) cin >> a[i];
    int mx = a[max_element(a + 1 , a + n + 1) - a];
    for(int i = 1;i <= n; ++i){
        dp[i] = 1;
        dp[i] = max(dp[i] , query(a[i] - 1) + 1);
        if(cnt[a[i]] < dp[i])
        upd(a[i] , dp[i] , mx);
        cnt[a[i]] = max(cnt[a[i]] , dp[i]);
    }
    int res = INT_MIN;
    for(int i = 1;i <= n; ++i) res = max(res , dp[i]);
    cout << res;*/
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    int mx = 0;
    for (int i = 1; i <= n; ++i)
    {
        int j = lower_bound(dp + 1, dp + 1 + mx, a[i]) - dp;
        dp[j] = a[i];
        mx = max(mx, j);
    }
    cout << mx;
    return 0;
}