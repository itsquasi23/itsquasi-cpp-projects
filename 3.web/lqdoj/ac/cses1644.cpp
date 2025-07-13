//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll ar[1000006] , sum[1000006];
ll st[4000006];

void upd(int id ,int l ,int r ,int pos ,ll val)
{
    if(pos < l || pos > r) return ;
    if(l == r)
    {
        st[id] = val;
        return;
    }
    int mid = l + r >> 1;
    upd(id << 1 , l  , mid , pos , val);
    upd(id << 1 | 1 , mid + 1 , r , pos , val);
    st[id] = min(st[id<<1] , st[id << 1 | 1]);
}
ll getmin(int id ,int l ,int r ,int u ,int v)
{
    if(v < l || r < u) return LLONG_MAX;
    if(u <= l && r <= v) return st[id];
    int mid = l + r >> 1;
    return min(getmin(id << 1 , l , mid , u , v) , getmin(id << 1 | 1 , mid + 1, r ,u  , v));
}
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n, a, b;
    cin >> n >> a >> b;
    for (int i = 1; i <= n; ++i){
        cin >> ar[i];
        sum[i] = sum[i-1] + ar[i];
        upd(1 ,0 , n , i , sum[i]);
    }
    ll res = LLONG_MIN;
    for(int i = a ; i <=n ; ++i){
        ll x = getmin(1 ,0 , n , max(0 , i - b + 1) , max(0 , i - a) ) - sum[max(0 , i - b)];
        
        if(x < 0) res = max(res , sum[i] - sum[max(0 , i - b)] - x);
        else res = max(res , sum[i] - sum[max(0,i-b)] );
    }
    cout << res;
    return 0;
}