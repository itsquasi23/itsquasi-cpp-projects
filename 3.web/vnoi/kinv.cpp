//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[10006], st[40006][16], dp[16] , p[16][10006];

const ll mod = 1e9;

void update(int id, int l, int r, int u, int i, ll val){
    if (u < l || r < u) return;
    if (l == r){
        st[id][i] = (st[id][i] + val) % mod;
        return;
    }
    int mid = l + r >> 1;
    update(id << 1, l, mid, u, i, val);
    update(id << 1 | 1, mid + 1, r, u, i, val);
    st[id][i] = (st[id << 1][i] + st[id << 1 | 1][i]) % mod;
}

ll get(int id, int l, int r, int u, int v, int i){
    if (v < l || r < u) return 0;
    if (u <= l && r <= v) return st[id][i];
    int mid = l + r >> 1;
    ll g1 = get(id << 1, l, mid, u, v, i);
    ll g2 = get(id << 1 | 1, mid + 1, r, u, v, i);
    return (g1 + g2) % mod;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n, k;
    cin >> n >> k;
    vector<ll>adj;
    map<ll,bool>cnt;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
        if(!cnt[a[i]]) adj.push_back(a[i]);
        cnt[a[i]] = 1;
    }
    sort(adj.begin() , adj.end()) ;
    for(int i = 1;i <= n ; ++ i)
    a[i] = lower_bound(adj.begin() , adj.end() , a[i]) - adj.begin() + 1 ;
    dp[1] = 1;
    for(int i = 1;i <= n; ++i)
    p[1][i] = 1;
    for (int i = 2; i <= k; ++i){
        for (int j = 1; j <= n; ++j){
            ll t = get(1, 1, n + 1, a[j] + 1, n + 1, i - 1);
            p[i][j] = t;
            dp[i] = (dp[i] + t) % mod;
            //cout << dp[i] << " " << t << "\n";
            
            update(1, 1, n + 1, a[j], i - 1, p[i - 1][j]);
        }
       // cout << "\n";
    }
    cout << dp[k] % mod;
    return 0;
}