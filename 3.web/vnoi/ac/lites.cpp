//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n,m;
ll a[1000006];
ll st[4000006], lazy[4000006];

void push(int id, int l, int r){
    if(lazy[id]){
        st[id] = (r - l + 1) - st[id];
        if (l != r){
            lazy[id << 1] ^= 1;
            lazy[id << 1 | 1] ^= 1;
        }
        lazy[id] ^= 1;
    }
}

void build(int id, int l, int r){
    if (l == r){
        st[id] = a[l];
        return;
    }
    int mid = l + r >> 1;
    build (id << 1, l, mid);
    build (id << 1 | 1, mid + 1, r);

    st[id] = st[id << 1] + st[id << 1 | 1];
}

void update(int id, int l, int r, int u, int v){
    push(id, l, r);
    if (v < l || r < u) return;
    if (u <= l && r <= v){
        lazy[id] ^= 1;
        push(id, l, r);
        return;
    }
    int mid = l + r >> 1;
    update(id << 1, l, mid, u, v);
    update(id << 1 | 1, mid + 1, r, u, v);

    st[id] = st[id << 1] + st[id << 1 | 1];
}

ll get(int id, int l, int r, int u, int v){
    push(id, l, r);
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
    cin >> n >> m;
    for (int i = 1; i <= n; ++i){
        a[i] = 0;
    }
    while (m--){
        bool val;
        int l, r;
        cin >> val >> l >> r;
        if (!val){
            update(1, 1, n, l, r);
        }
        else {
            cout << get(1, 1, n, l, r) << "\n";
        }
    }
    return 0;
}