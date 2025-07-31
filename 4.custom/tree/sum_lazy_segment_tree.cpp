//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int ARR = 1000006;

int n,q;
ll a[ARR];
ll st[ARR * 4], lazy[ARR * 4];

void push(int id, int l, int r) {
    if (lazy[id]) {
        st[id] += lazy[id] * (r - l + 1);
        /*
        When update min/max: st[id] += lazy[id];
        When update sum: st[id] += lazy[id] * (r - l + 1);
        With sum at get:
        (+) st[id] += (r - l + 1) * x;
        (*) st[id] *= x;
        (=) st[id] = (r - l + 1) * x;
        */
        if (l != r){
            lazy[2 * id] += lazy[id];
            lazy[2 * id + 1] += lazy[id];
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
    build(2 * id, l, mid);
    build(2 * id + 1, mid + 1, r);

    st[id] = st[2 * id] + st[2 * id + 1];
}

void update(int id, int l, int r, int u, int v, ll val) {
    push(id, l, r);

    if (v < l || r < u) return;
    if (u <= l && r <= v) {
        lazy[id] += val;
        push(id, l, r);
        return;
    }
    int mid = l + r >> 1;
    update(2 * id, l, mid, u, v, val);
    update(2 * id + 1, mid + 1, r, u, v, val);

    st[id] = st[2 * id] + st[2 * id + 1];
}

ll get(int id, int l, int r, int u, int v) {
    push(id, l, r);

    if (v < l || r < u) return 0;

    if (u <= l && r <= v) return st[id];

    int mid = l + r >> 1;
    ll get1 = get(2 * id, l, mid, u, v);
    ll get2 = get(2 * id + 1, mid + 1, r, u, v);

    return get1 + get2;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; ++i) cin >> a[i];
    build(1, 1, n);
    cin >> q;
    while (q--){
        ll l, u, v;
        cin >> l >> u >> v;
        if (l == 1){
            ll x;
            cin >> x;
            update(1, 1, n, u, v, x);
        }
        else cout << get(1, 1, n, u, v) << "\n";
    }
    return 0;
}