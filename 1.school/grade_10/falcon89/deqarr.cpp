//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006];
// ll st[4000006];

/* void build(int id, int l, int r){
    if (l == r){
        st[id] = a[l];
        return;
    }
    int mid = l + r >> 1;
    build(id << 1, l, mid);
    build(id << 1 | 1, mid + 1, r);
    st[id] = min(st[id << 1], st[id << 1 | 1]);
}

ll get(int id, int l, int r, int u, int v){
    if (v < l || r < u) return LLONG_MAX;
    if (u <= l && r <= v) return st[id];
    int mid = l + r >> 1;
    ll g1 = get(id << 1, l, mid, u, v);
    ll g2 = get(id << 1 | 1, mid + 1, r, u, v);
    return min(g1, g2);
} */

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n, k;
    cin >> n >> k;
    deque<ll> dq;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    /*build(1, 1, n);
    for (int i = 1; i <= n - k + 1; ++i){
        cout << get(1, 1, n, i, i + k - 1) << " ";
    }*/
    vector<ll> mn;
    while (dq.size()) dq.pop_front();
    for (int i = 1; i <= n; ++i){
        while (dq.size() && a[dq.back()] > a[i]) dq.pop_back();
        dq.push_back(i);
        if (dq.front() + k <= i) dq.pop_front();
        if (i >= k) mn.push_back(a[dq.front()]);
    }
    for (auto i : mn){
        cout << i << " ";
    }
    return 0;
}