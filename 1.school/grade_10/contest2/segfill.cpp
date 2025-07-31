//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006], st[4000006], lazy[4000006];

void push(int id, int l, int r , int val){

    if (lazy[id] != -1){
        st[id] = (r - l + 1) *lazy[id] ;
        if (l != r){
            lazy[id << 1] = lazy[id];
            lazy[id << 1 | 1] = lazy[id];
        }
        lazy[id] = -1;
        
    }

}

void update(int id, int l, int r, int u, int v, ll val){
    push(id, l, r , val);
    if (v < l || r < u) return;
    if (u <= l && r <= v){
        
        lazy[id] = val;
        push(id, l, r , val);
        return;
    }
    int mid = l + r >> 1;
    update(id << 1, l, mid, u, v, val);
    update(id << 1 | 1, mid + 1, r, u, v, val);
    st[id] = st[id << 1] + st[id << 1 | 1];
}

ll get(int id, int l, int r, int u, int v){
    push(id, l, r , 1);
    if (v < l || r < u) return 0;
    if (u <= l && r <= v) return st[id];
    int mid = l + r >> 1;
    ll g1 = get(id << 1, l, mid, u, v);
    ll g2 = get(id << 1 | 1, mid + 1, r, u, v);
    return g1 + g2;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n, q;
    cin >> n >> q;
    for(int i = 1;i <=4 * n; ++i)
        lazy[i] = -1;
    while (q--){
        ll l, u, v;
        cin >> l >> u >> v;
        if (l == 1 || l == 0) update(1, 1, n, u, v, l);
        else cout << get(1, 1, n, u, v) << "\n";
        
    }
    return 0;
}