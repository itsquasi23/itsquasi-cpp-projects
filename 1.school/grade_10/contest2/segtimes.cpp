//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006], res[1000006], st[4000006], lazy[4000006];

void push(int id, int l, int r){
    if (lazy[id]){
        st[id] -= lazy[id];
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
    build (id << 1, l, mid);
    build (id << 1 | 1, mid + 1, r);
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
    update (id << 1, l, mid, u, v, val);
    update (id << 1 | 1, mid + 1, r, u, v, val);
}

ll get(int id, int l, int r, int i){
    push(id, l, r);
    if (i < l || r < i) return 0;
    if (l == r) return st[id];
    int mid = l + r >> 1;
    if (i <= mid) return get(id << 1, l, mid, i);
    else return get(id << 1 | 1, mid + 1, r, i);
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
        res[i] = -1;
    }
    build(1, 1, n);
    int c = 1;
    while(k--){
        ll l, r, t;
        cin >> l >> r >> t;
        update(1, 1, n, l, r, t);
        for (int i = l; i <= r; ++i){
            if (res[i] == -1){
                ll v = get(1, 1, n, i);
                if (v <= 0) res[i] = c;
            }
        }
        c++;
    }
    for (int i = 1; i <= n; ++i){
        cout << res[i] << " ";
    }
    return 0;
}