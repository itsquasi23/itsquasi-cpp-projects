//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    string a,b;
    cin >> a >> b;
    a = ' ' + a;
    b = ' ' + b;
    int t;
    cin >> t;
    while (t--){
        int u,v;
        cin >> u >> v;
        if (u == 1){
            if (a[v] == b[v]) cout << "YES\n";
            else cout << "NO\n";
        }
        else {
            if (a[v] == b[b.size() - v]) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}