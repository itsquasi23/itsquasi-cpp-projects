//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006], st[4000006];

pair<ll,ll> lazy[4000006];

const ll mod = 1e9 + 7;

void push(int id, int l, int r){
    ll a = lazy[id].first, b = lazy[id].second;
    ll op1 = (a * (r + l) * (r - l + 1) / 2) % mod;
    ll op2 = (b * (r - l + 1)) % mod;
    st[id] = ((st[id] + op1) % mod + op2) % mod;
    if (l != r){
        (lazy[id << 1].first += a) %= mod;
        (lazy[id << 1].second += b) %= mod;
        (lazy[id << 1 | 1].first += a) %= mod;
        (lazy[id << 1 | 1].second += b) %= mod;
    }
    lazy[id] = {0, 0};
}

void update(int id, int l, int r, int u, int v, ll a, ll b){
    push(id, l, r);
    if (v < l || r < u) return;
    if (u <= l && r <= v){
        lazy[id].first = a;
        lazy[id].second = (b - u * a + mod * mod) % mod;
        push(id, l, r);
        return;
    }
    int mid = l + r >> 1;
    update(id << 1, l, mid, u, v, a, b);
    update(id << 1 | 1, mid + 1, r, u, v, a, b);
    st[id] = (st[id << 1] + st[id << 1 | 1]) % mod;
}

ll get(int id, int l, int r, int u, int v){
    push(id, l, r);
    if (v < l || r < u) return 0;
    if (u <= l && r <= v) return st[id];
    int mid = l + r >> 1;
    ll g1 = get(id << 1, l, mid, u, v);
    ll g2 = get(id << 1 | 1, mid + 1, r, u, v);
    return (g1 + g2) % mod;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n, t;
    cin >> n >> t;
    while (t--){
        int t, l, r;
        cin >> t >> l >> r;
        if (t == 1){
            ll a, b;
            cin >> a >> b;
            update(1, 1, n, l, r, a, b);
        }
        else cout << get(1, 1, n, l, r) << "\n";
    }
    return 0;
}