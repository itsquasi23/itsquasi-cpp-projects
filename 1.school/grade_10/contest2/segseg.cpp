//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006], st[4000006];

ll kien(ll n){
    if (n & 1) return n;
    ll s = 1;
    for (int i = 2; i * i <= n; ++i){
        if (n % i == 0){
            if ((n / i) & 1) s = max(s, n / i);
            if (i & 1) s = max(s, i * 1ll);
        }
    }
    return s;
}

void build(int id, int l, int r){
    if (l == r){
        st[id] = a[l] + a[kien(l)];
        return;
    }
    int mid = l + r >> 1;
    build (id << 1, l, mid);
    build (id << 1 | 1, mid + 1, r);
    st[id] = st[id << 1] + st[id << 1 | 1];
}

void update(int id, int l, int r, int i, ll val){
    if (i < l || r < i) return;
    if (l == r){ 
        a[l] = val;
        st[id] = a[l] + a[kien(l)]; 
        return;}
    int mid = l + r >> 1;
    update (id << 1, l, mid, i, val);
    update (id << 1 | 1, mid + 1, r, i, val);
    st[id] = st[id << 1] + st[id << 1 | 1]; 
}

ll get(int id, int l, int r, int u, int v){
    if (v < l || r < u) return 0;

    if (u <= l && r <= v) return st[id];
    int mid = l + r >> 1;
    ll g1 = get(id << 1, l, mid, u, v);
    ll g2 = get(id << 1 | 1, mid + 1, r, u, v);
    return g1 + g2;
}
vector<int> wm[1000006];
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    for(int i = 1;i <= n; ++i)
        wm[kien(i)].push_back(i);
    build (1, 1, n);
    
    while (q--){
        ll l, u, v; 
        cin >> l >> u >> v;
        if (l == 1) {
            
            update(1, 1, n, u, v);
            for(auto j : wm[u])
                update(1, 1, n, j, a[j]);
        }
        else cout << get(1, 1, n, u, v) << "\n";
    }
    return 0;
}