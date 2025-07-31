// Welcome to your new home, CLCer ItsQuasi!
// MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006], st[4000006][10];

bool check(ll n, ll k)
{
    if (n % k == 0)
        return 1;
    while (n)
    {
        ll t = n % 10;
        if (t == k)
            return 1;
        n /= 10;
    }
    return 0;
}

void build(int id, int l, int r, int k)
{
    if (l == r)
    {
        if (check(l, k)) st[id][k] = a[l] << 1;
        else st[id][k] = a[l];
        return;
    }
    int mid = l + r >> 1;
    build(id << 1, l, mid, k);
    build(id << 1 | 1, mid + 1, r, k);
    st[id][k] = st[id << 1][k] + st[id << 1 | 1][k];
}

void update(int id, int l, int r, int k, int i, ll c)
{
    if (i < l || r < i)
        return;
    if (l == r)
    {
        if (check(l, k)) st[id][k] = c << 1;
        else st[id][k] = c;
        return;
    }
    int mid = l + r >> 1;
    update(id << 1, l, mid, k, i, c);
    update(id << 1 | 1, mid + 1, r, k, i, c);
    st[id][k] = st[id << 1][k] + st[id << 1 | 1][k];
}

ll get(int id, int l, int r, int k, int u, int v)
{
    if (v < l || r < u)
        return 0;
    if (u <= l && r <= v)
        return st[id][k];
    int mid = l + r >> 1;
    return get(id << 1, l, mid, k, u, v) + get(id << 1 | 1, mid + 1, r, k, u, v);
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    for (int k = 1; k <= 9; ++k)
    {
        build(1, 1, n, k);
    }
    while (q--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            ll i, c;
            cin >> i >> c;
            for (int k = 1; k <= 9; ++k)
            {
                update(1, 1, n, k, i, c);
            }
        }
        else
        {
            ll l, r, k;
            cin >> l >> r >> k;
            cout << get(1, 1, n, k, l, r) << "\n";
        }
    }
    return 0;
}