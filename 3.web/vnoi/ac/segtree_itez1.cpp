//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int ARR = 1000006;
const ll INF = 1000000009;

ll a[ARR], st[4 * ARR];

void build(int id, int l, int r){
    if (l == r){
        st[id] = a[l];
        return;
    }
    int mid = l + r >> 1;
    build(2 * id, l, mid);
    build(2 * id + 1, mid + 1, r);

    st[id] = max(st[2 * id], st[2 * id + 1]);
}

void update(int id, int l, int r, int i, ll val){
    if (i < l || r < i) return;
    if (l == r){
        st[id] = val;
        return;
    }
    int mid = l + r >> 1;
    update(2 * id, l, mid, i, val);
    update(2 * id + 1, mid + 1, r, i, val);

    st[id] = max(st[2 * id], st[2 * id + 1]);
}

ll get(int id, int l, int r, int u, int v){
    if (v < l || r < u) return -INF;
    if (l >= u && v >= r) return st[id];

    int mid = l + r >> 1;
    ll get1 = get(2 * id, l, mid, u, v);
    ll get2 = get(2 * id + 1, mid + 1, r, u, v);

    return max(get1, get2);
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) cin >> a[i];
    build(1, 1, n);
    int q;
    cin >> q;
    while(q--){
        ll val, x, y;
        cin >> val >> x >> y;
        if (val == 1) update(1, 1, n, x, y);
        else cout << get(1, 1, n, x, y) << "\n";
    }
    return 0;
}