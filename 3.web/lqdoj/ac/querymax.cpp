//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006];
ll st[4000006], lazy[4000006];

void push(int id, int l, int r){
    if (lazy[id]){
        st[id] += lazy[id];
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
    st[id] = max(st[id << 1], st[id << 1 | 1]);
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
    st[id] = max(st[id << 1], st[id << 1 | 1]);
}

ll get(int id, int l, int r, int u, int v){
    push(id, l, r);

    if (v < l || r < u) return LLONG_MIN;
    if (u <= l && r <= v) return st[id];

    int mid = l + r >> 1;
    ll get1 = get(id << 1, l, mid, u, v);
    ll get2 = get(id << 1 | 1, mid + 1, r, u, v);
    return max(get1, get2);
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int m, n;
    cin >> m >> n;
    for (int i = 1; i <= m; ++i){
        cin >> a[i];
    }
    build(1, 1, m);
    while (n--){
        ll val;
        cin >> val;
        if (val == 1){
            ll l, r, x;
            cin >> l >> r >> x;
            update(1, 1, m, l, r, x);
        }
        else {
            ll l, r;
            cin >> l >> r;
            cout << get(1, 1, m, l, r) << "\n";
        }
    }
    return 0;
}