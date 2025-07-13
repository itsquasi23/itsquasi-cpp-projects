//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006];
ll st[4000006];

const int INF = 1e9;

void build(int id, int l, int r){
    if (l == r){
        st[id] = a[l];
        return;
    }
    int mid = l + r >> 1;
    build(2 * id, l, mid);
    build(2 * id + 1, mid + 1, r);

    st[id] = min(st[2 * id], st[2 * id + 1]);
}

void update(int id, int l, int r, int i, ll val){
    if (i < l || r < i) return;
    if (l == r) {
        st[id] = val;
        return;
    }
    int mid = l + r >> 1;
    update(2 * id, l, mid, i, val);
    update(2 * id + 1, mid + 1, r, i, val);

    st[id] = min(st[2 * id], st[2 * id + 1]);
}

ll get(int id, int l, int r, ll u, ll v){
    if (v < l || r < u) return INF;
    if (u <= l && r <= v) return st[id];
    int mid = l + r >> 1;
    ll g1 = get(2 * id, l, mid, u, v);
    ll g2 = get(2 * id + 1, mid + 1, r, u, v);

    return min(g1, g2);
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll n,p;
    cin >> n >> p;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    build(1, 1, n);
    while (p--){
        ll val, x, y;
        cin >> val >> x >> y;
        if (val == 1) update(1, 1, n, x, y);
        else cout << get(1, 1, n, x, y) << "\n";
    }
    return 0;
}