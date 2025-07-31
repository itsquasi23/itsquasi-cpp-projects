//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006], st[1000006];

void build(int id, int l, int r, ll w){
    if (l == r){
        st[id] = w;
        return;
    }
    int mid = l + r >> 1;
    build (id << 1, l, mid, w);
    build (id << 1 | 1, mid + 1, r, w);
    st[id] = max(st[id << 1], st[id << 1 | 1]);
}

void update(int id, int l, int r, int pos, ll val){
    if (l == r) {
        st[id] -= val;
        return;
    }
    int mid = (l + r) >> 1;
    if (pos <= mid) update(id << 1, l, mid, pos, val);
    else update(id << 1 | 1, mid + 1, r, pos, val);
    st[id] = max(st[id << 1], st[id << 1 | 1]);
}

ll get(int id, int l, int r, ll val){
    if (st[id] < val) return -1;
    if (l == r) return l;
    int mid = (l + r) >> 1;
    if (st[id << 1] >= val) return get(id << 1, l, mid, val);
    else return get(id << 1 | 1, mid + 1, r, val);
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll m, w, n;
    cin >> m >> w >> n;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    build (1, 1, m, w);
    for (int i = 1; i <= n; ++i){
        int pos = get(1, 1, m, a[i]);
        cout << pos << "\n";
        if (pos != -1) update(1, 1, m, pos, a[i]);
    }
    return 0;
}