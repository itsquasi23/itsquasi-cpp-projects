//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;
ll a[1000005] , pr[1000005] , tree[4000005];
void upd(int id ,int l ,int r ,int pos , ll val)
{
    if(pos < l || pos > r) return ;
    if(l == r)
    {
        tree[id] = val;
        return ;
    }
    int mid = l + r >> 1;
    upd(id << 1 , l , mid , pos ,val);
    upd(id << 1 | 1 , mid + 1 , r ,pos ,val);
    tree[id] = min(tree[id << 1] , tree[id << 1 | 1]);
}
ll getmin(int id ,int l ,int r ,int u ,int v)
{
    if(v < l || r < u) return INT_MAX;
    if(u <= l && r <= v) return tree[id];
    int mid = l + r >> 1;
    return min(getmin(id << 1 , l ,mid , u , v) , getmin(id << 1 | 1 , mid + 1 , r , u , v));
}
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n, l, r;
    cin >> n >> l >> r;
    for(int i = 1;i <= n ; ++i) cin >> a[i] , pr[i] = pr[i - 1] + a[i];
    for(int i = 1;i <l ; ++i)
    upd(1 ,0 , n , i , pr[i]);
    ll res = LLONG_MIN;
    for(int i = l ;i <= n; ++i){
        ll x = pr[i] - pr[i - l];
        ll k = getmin(1 ,0 , n , max(i - r + 1 , 0) , i - l) - pr[max(0 , i - r)];
        if(k >= 0) x = pr[i] - pr[max(0 , i - r)];
        else x = x + (pr[i - l] -pr[max(0 , i - r)]) - k;
        //cout << k << " " << x << "\n";
        res = max(res , x);
        upd(1 , 0 , n , i , pr[i]);
    }
    cout << res;
    return 0;
}