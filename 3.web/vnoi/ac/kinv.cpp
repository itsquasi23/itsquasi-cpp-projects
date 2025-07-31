//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

const ll MAX = 6 * 1e4;

ll a[1000006], st[4 * MAX + 6];

void update(int id, int l, int r, int i){
    if (i < l || r < i) return;
    if (l == r) {
        st[id]++;
        return;
    }
    int mid = l + r >> 1;
    update(id << 1, l, mid, i);
    update(id << 1 | 1, mid + 1, r, i);
    st[id] = st[id << 1] + st[id << 1 | 1];
}

ll get(int id, int l, int r, int u, int v){
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
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    ll t = 0;
    for (int i = n; i >= 1; --i){
        t += get(1, 1, MAX, 1, a[i] - 1);
        update(1, 1, MAX, a[i]);
    }
    cout << t;
    return 0;
}