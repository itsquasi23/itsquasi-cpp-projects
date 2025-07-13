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
    st[id] = max(st[2 * id], st[2 * id + 1]);
}

ll get(int id, int l, int r, int u, int v){
    if (v < l || r < u) return -INF;
    if (u <= l && r <= v) return st[id];
    int mid = l + r >> 1;
    ll g1 = get(2 * id, l, mid, u, v);
    ll g2 = get(2 * id + 1, mid + 1, r, u, v);
    return max(g1,g2);
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n,c;
    ll t;
    cin >> n >> t >> c;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    build(1, 1, n);
    ll cnt = 0;
    for (int i = 1; i <= n - c + 1; ++i){
        if (get(1, 1, n, i, i + c - 1) <= t) cnt++;
    }
    cout << cnt;
    return 0;
}