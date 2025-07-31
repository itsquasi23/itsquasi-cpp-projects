//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

const ll mod = 1e9 + 7;

ll a[1000006], st[4000006], lazy1[4000006], lazy2[4000006];

void push(int id, int l, int r){
    if (lazy1[id] || lazy2[id] != 1){
        st[id] = (st[id] * lazy2[id]) % mod;
        st[id] = (st[id] + (r - l + 1) * lazy1[id]) % mod;
        if (l != r){
            lazy2[id << 1] = (lazy2[id << 1] * lazy2[id]) % mod;
            lazy2[id << 1 | 1] = (lazy2[id << 1 | 1] * lazy2[id]) % mod;
            lazy1[id << 1] = ((lazy1[id << 1] * lazy2[id]) % mod + lazy1[id]) % mod;
            lazy1[id << 1 | 1] = ((lazy1[id << 1 | 1] * lazy2[id]) % mod + lazy1[id]) % mod;
        }
        lazy2[id] = 1;
        lazy1[id] = 0;
    }
}

void build(int id, int l, int r){
    lazy1[id] = 0;
    lazy2[id] = 1;
    if (l == r){
        st[id] = a[l];
        return;
    }
    int mid = l + r >> 1;
    build(id << 1, l, mid);
    build(id << 1 | 1, mid + 1, r);
    st[id] = (st[id << 1] + st[id << 1 | 1]) % mod;
}

void update(int id, int l, int r, int u, int v, ll val, int type){
    push(id, l, r);
    if (v < l || r < u) return;
    if (u <= l && r <= v){
        if (type == 3){
            lazy1[id] = val;
            lazy2[id] = 0;
        }
        else if (type == 2){
            lazy2[id] = (lazy2[id] * val) % mod;
            lazy1[id] = (lazy1[id] * val) % mod;
        }
        else if (type == 1){
            lazy1[id] = (lazy1[id] + val) % mod;
        }
        push(id, l, r);
        return;
    }
    int mid = l + r >> 1;
    update(id << 1, l, mid, u, v, val, type);
    update(id << 1 | 1, mid + 1, r, u, v, val, type);
    st[id] = (st[id << 1] + st[id << 1 | 1]) % mod;
}

ll get(int id, int l, int r, int u, int v){
    push(id, l, r);
    if (v < l || r < u) return 0;
    if (u <= l && r <= v) return st[id];
    int mid = l + r >> 1;
    ll get1 = get(id << 1, l, mid, u, v);
    ll get2 = get(id << 1 | 1, mid + 1, r, u, v);
    return (get1 + get2) % mod;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    build(1, 1, n);
    while (k--){
        ll l, u, v;
        cin >> l >> u >> v;
        if (l == 1 || l == 2 || l == 3){
            ll w;
            cin >> w;
            update(1, 1, n, u, v, w, l);
        }
        else cout << get(1, 1, n, u, v) << "\n";
    }
    return 0;
}