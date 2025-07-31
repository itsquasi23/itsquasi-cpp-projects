//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<int> a[100005];
bool check[1000006];

void dfs(int u){
    check[u] = 1;
    for (auto v : a[u]){
        if(!check[v])
        dfs(v);
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; ++i){
        int u, v;
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    int t = 0;
    for (int i = 1; i <= n; ++i){
        if(!check[i])
        dfs(i), t++;
    }
    cout << t;
    return 0;
}