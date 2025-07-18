//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006], st[4000006];

void update(int id, int l, int r, int i, ll k){
    if (i < l || r < i) return;
    if (l == r){
        st[id] = k;
        return;
    }
    int mid = l + r >> 1;
    update(id << 1, l, mid, i, k);
    update(id << 1 | 1, mid + 1, r, i, k);
    st[id] = max(st[id << 1], st[id << 1 | 1]);
}

ll get(int id, int l, int r, int u, int v){
    if (v < l || r < u) return LLONG_MIN;
    if (u <= l && r <= v) return st[id];
    int mid = l + r >> 1;
    return max(get(id << 1, l, mid, u, v), get(id << 1 | 1, mid + 1, r, u, v));
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n,m;
    cin >> n >> m;
    for (int i = 1; i <= m; ++i){
        char s;
        ll x, y;
        cin >> s >> x >> y;
        if (s == 'S') update(1, 1, n, x, y);
        else {
            cout << get(1, 1, n, x, y) << "\n";
        }
    }
    return 0;
}