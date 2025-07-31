//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006], st[4000006], lazy[4000006];

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
    st[id] = min(st[id << 1], st[id << 1 | 1]);
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
    st[id] = min(st[id << 1], st[id << 1 | 1]);
}

ll get(int id, int l, int r, int u, int v){
    push(id, l, r);
    if (v < l || r < u) return LLONG_MAX;
    if (u <= l && r <= v) return st[id];
    int mid = l + r >> 1;
    return min(get(id << 1, l, mid, u, v), get(id << 1 | 1, mid + 1, r, u, v));
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }
    build(1, 0, n - 1);
    int m;
    cin >> m;
    cin.ignore();
    while (m--){
        string s;
        getline(cin,s); 
        stringstream ss(s);
        int x;
        vector<int> wm;
        while(ss >> x) wm.push_back(x);
        if (wm.size() == 2){
            ll l = wm[0], r = wm[1];
            if (r < l){
            cout << min(get(1, 0, n - 1, l, n - 1), get(1, 0, n - 1, 0, r));
            }
            else cout << get(1, 0, n - 1, l, r);
            cout << "\n";
        }
        else {
            ll l = wm[0], r = wm[1], v = wm[2];
            if (r < l){
                update(1, 0, n - 1, l, n - 1, v);
                update(1, 0, n - 1, 0, r, v);
            }
            else update(1, 0, n - 1, l, r, v);
        }

    }
    return 0;
}