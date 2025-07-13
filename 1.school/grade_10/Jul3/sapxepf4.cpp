#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
using namespace std;
pair<pair<ll,ll>,ll>a[1000005];
int n , q;
ll x[1000005] , y[1000005] , z[1000005];
int main()
{
    cin >> n >> q;
    for(int i = 1; i <= n; ++i)
        cin >> a[i].fi.fi >> a[i].fi.se >> a[i].se;
    sort(a + 1 , a + n + 1);
    for(int i = 1;i <= n; ++i)
        x[i] = a[i].fi.fi , y[i] = a[i].fi.se , z[i] = a[i].se ;
    while(q--)
    {
        ll v,b,d;
        cin >> v >> b >> d;
        int t1 = lower_bound(x + 1 , x + n + 1 , v ) - x;
        if(v != x[t1]){
            cout << n - t1 + 1 << "\n";
            continue;
        }
        int ck = upper_bound(x + 1 , x + n + 1 , v) - x;
        int t2 = lower_bound(y + t1 , y + ck , b) - y ;
        if(b != y[t2]){
            cout << n - t2 + 1 << "\n";
            continue;
        }
        int ck1 = upper_bound(y + t2 ,y + ck , b) - y;
        int t3 = lower_bound(z + t2 , z + ck1 , d) - z;
            cout << n - t3 + 1 << "\n";
    }
    return 0;
}