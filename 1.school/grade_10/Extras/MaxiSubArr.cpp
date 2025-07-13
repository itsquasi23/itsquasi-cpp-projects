//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006];

ll check(int x ,int n)
{
    ll res = 0;
    for(int i = x ;i <= n; ++i){
        res = max(res , a[i] - a[i - x]);
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    ll k;
    cin >> n >> k;
    a[0] = 0;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
        a[i] += a[i - 1];
    }
    int res = -1;
    int l = 1 , r = n;
    while(l <= r)
    {
        int mid = l + r >> 1;
        if(check(mid , n) < k) res = mid , l = mid + 1;
        else r = mid - 1;
    }
    cout << res;
    return 0;
}