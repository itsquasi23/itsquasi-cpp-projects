//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;
ll bit [10005], n , t;
int a[10005];
void upd(int u , int val)
{
    for(int i = u ; i <= 10005 ; i += i & (-i))
        bit[i] += val;
}
int query(int u)
{
    ll res = 0;
    for(int i = u ; i >= 1; i -= i & (-i))
        res += bit[i];
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    cin >> n >> t;
    for(int i = 1;i <= n; ++i) cin >> a[i] ,upd(i , a[i]);
    while(t--)
    {
        int val ,x ,y;
        cin >> val >> x >> y;
        if(val == 1) cout << query(y) - query(x-1) << "\n";
        else upd(x , y - a[x]) , a[x] = y;
    }
    return 0;
}