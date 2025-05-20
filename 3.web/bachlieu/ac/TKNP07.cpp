// Goal: Get into CLC
// MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;
ll n, k, a[15005];
int kt(ll n, long long m)
{
    ll t = m;
    int c = 1;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] > t){
            t = m;
            c++;
        }
        t -= a[i];
    }
    return c;
}
int main()
{
    /*if (fopen(".inp","r"))
    {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }*/
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    cin >> n >> k;
    ll mx = 0, sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        sum += a[i];
        mx = max(mx,a[i]);
    }
    ll l=mx,r=sum;
    ll res = 0;
    while(l<=r)
    {
        long long mid=(l+r)/2;
        if(kt(n,mid) <= k){
            res = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    cout << res;
    return 0;
}
