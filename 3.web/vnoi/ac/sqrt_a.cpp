//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006], st[4000006];

void build(int id, int l, int r){
    if (l == r){ st[id] = a[l]; return;}

    int mid = l + r >> 1;
    build(id << 1, l, mid);
    build(id << 1 | 1, mid + 1, r);

    st[id] = st[id << 1] + st[id << 1 | 1];
}

void update(int id, int l, int r, int i, ll val){
    if (i < l || r < i) return;
    if (l == r){ st[id] = val; return;}

    int mid = l + r >> 1;
    update(id << 1, l, mid, i, val);
    update(id << 1 | 1, mid + 1, r, i, val);

    st[id] = st[id << 1] + st[id << 1 | 1];
}

ll get(int id, int l, int r, int u, int v){
    if (v < l || r < u) return 0;
    if (u <= l && r <= v) return st[id];

    int mid = l + r >> 1;

    return get(id << 1, l, mid, u, v) + get(id << 1 | 1, mid + 1, r, u, v);
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    build(1, 1, n);
    while (q--){
        ll u, l, r;
        cin >> u >> l >> r;
        if (u == 1) update(1, 1, n, l, r);
        else cout << get(1, 1, n, l, r) << "\n";
    }
    return 0;
}