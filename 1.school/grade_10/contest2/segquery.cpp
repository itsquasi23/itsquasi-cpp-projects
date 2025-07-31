//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006], st[4000006], lazy[4000006] , ly[4000006];
const ll mod = 1e9 + 7;

void push(int id, int l, int r){
    if (lazy[id] != 1 || ly[id]){
        st[id] = (lazy[id] * st[id]) % mod;
        
        st[id] += (r - l + 1)*ly[id];
        st[id] %= mod;
        if (l != r){
            (lazy[id << 1] *= lazy[id]) %= mod;
            (lazy[id << 1 | 1] *= lazy[id])%=mod;
            ly[id << 1] = ((lazy[id] * ly[id << 1]) % mod + ly[id] )% mod;
            ly[id << 1 | 1] = ((lazy[id] * ly[id << 1 | 1]) % mod + ly[id] )% mod;
        }
        lazy[id] = 1;
        ly[id] = 0;
    }
}
void build(int id ,int l ,int r)
{
    if(l == r)
    {
        st[id] = a[l];
        return ;
    }
    int mid = l + r >> 1;
    build(id << 1 , l ,mid);
    build(id << 1 | 1 , mid + 1 , r);
    st[id] = st[id << 1] + st[id << 1 | 1];
    st[id ] %= mod;
}
void update(int id, int l, int r, int u, int v, ll val , int k){
    push(id, l, r);
    if (v < l || r < u) return; 
    if (u <= l && r <= v){
        if(k == 2)
        lazy[id] = (lazy[id] *val)%mod;
        if(k == 1)
        ly[id] = (ly[id] + val)%mod;
        push(id, l, r);
        return;
    }
    int mid = l + r >> 1;
    update(id << 1, l, mid, u, v, val , k);
    update(id << 1 | 1, mid + 1, r, u, v, val , k);
    st[id] = (st[id << 1] + st[id << 1 | 1]) % mod;
}

ll get(int id, int l, int r, int u, int v){
    push(id, l, r);
    if (v < l || r < u) return 0;
    if (u <= l && r <= v) return st[id] % mod;
    int mid = l + r >> 1;
    ll g1 = get(id << 1, l, mid, u, v);
    ll g2 = get(id << 1 | 1, mid + 1, r, u, v);
    return (g1 + g2) % mod;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n, q;
    cin >> n >> q;
    
    for(int i = 1; i <= 4 * n; ++i)
        lazy[i] = 1;
    
    while (q--){
        int type , l , r;
        ll w;
        cin >> type >> l >> r;
        if(type == 1){
            cin >> w;
            update(1 ,1, n , l , r , w  , 1);
        }else if(type == 2)
        {
            cin >> w;
            update(1 ,1, n , l , r , w , 2);
        }else cout << get(1 ,1 , n , l , r) << "\n";
    }
    return 0;
}
