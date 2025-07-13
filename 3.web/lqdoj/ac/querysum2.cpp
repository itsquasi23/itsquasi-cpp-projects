//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006];
ll st[4000006], lazy[4000006];

void push(int id, int l, int r) {
    if (lazy[id]){
        st[id] += lazy[id] * (r - l + 1);
        if (l != r){
            lazy[id << 1] += lazy[id];
            lazy[id << 1 | 1] += lazy[id];
        }
        lazy[id] = 0;
    }
}

void build(int id, int l, int r){
    if (l == r){
        st[id] = a[l];
        return;
    }
    int mid = l + r >> 1;
    build(id << 1, l, mid);
    build(id << 1 | 1, mid + 1, r);

    st[id] = st[id << 1] + st[id << 1 | 1];
}

void update(int id, int l, int r, int u, int v, ll val){
    push(id, l, r);

    if (v < l || r < u) return;
    if (u <= l && r <= v){
        lazy[id] += val;
        push(id, l, r);
        return;
    }
    int mid = l + r >> 1;
    update(id << 1, l, mid, u, v, val);
    update(id << 1 | 1, mid + 1, r, u, v, val);

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
    int n, p;
    cin >> n >> p;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    build(1, 1, n);
    while (p--){
        int val;
        cin >> val;
        if (val == 1){
            int l, r; ll x;
            cin >> l >> r >> x;
            update(1, 1, n, l, r, x);
        }
        else {
            int l, r;
            cin >> l >> r;
            cout << get(1, 1, n, l, r) << "\n";
        }
    }
    return 0;
}