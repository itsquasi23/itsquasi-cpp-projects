//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n , m , b[1000005] , res;
vector<int> a[100005];
int dfs(int u )
{
    if(b[u]) return b[u];
    for(auto v : a[u])
    {
        b[v] = dfs(v );
        b[u] = max(b[u] , b[v] + 1);
    }  
    return b[u]; 
}
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    cin >> n >> m;
    for(int i = 1;i <= m; ++i){
        int u , v;
        cin >> u >> v;
        a[u].push_back(v);
    }
    

    for(int i = 1;i <= n; ++i){
       b[i] =  dfs(i );
    }
    int res = 0;
    for(int i = 1;i <= n; ++i)
        res = max(res , b[i]);
    cout << res;
    return 0;
}