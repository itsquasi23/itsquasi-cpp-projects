//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006];
ll st[4000006], lazy[4000006];

void push(int id, int l, int r){
    if (lazy[id] != 0){
        st[id] += lazy[id] * (r - l + 1);
        if (l != r){
            lazy[id << 1] += lazy[id];
            lazy[id << 1 | 1] += lazy[id];
        }
        lazy[id] = 0;
    }
}

void build (int id, int l, int r){
    if (l == r){
        st[id] = a[l];
        return;
    }
    int mid = l + r >> 1;
    build(id << 1, l, mid);
    build(id << 1 | 1, mid + 1, r);
    st[id] = st[id << 1] + st[id << 1 | 1];
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
    st[id] = st[id << 1] + st[id << 1 | 1];
}
ll get(int id , int l ,int r ,int u ,int v)
{
    push(id , l , r );
    if(v < l || r < u) return 0;
    if(u <= l && r <= v) return st[id];
    int mid = l + r >> 1;
    return get(id << 1 , l , mid , u , v) + get(id << 1 | 1 , mid + 1 , r , u , v);
}
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n,m;
    cin >> n;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    sort (a + 1, a + 1 + n);
    build(1, 1, n);
    cin >> m;
    while (m--){
        ll b;
        cin >> b;
        int l = 1 , r = n , res = 0;
        while(l <= r)
        {
            int mid = l + r >> 1;
            if(get(1 ,1 , n , mid , mid) >= b) res = mid , r = mid - 1;
            else l = mid + 1;
        }
        if(res != 0)
        cout << n - res + 1 << "\n";
        else cout << "0\n";
        if(res != 0)
            update(1 ,1 , n , res , n , -1);
    }
    return 0;
}