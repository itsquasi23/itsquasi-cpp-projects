//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006];

unordered_map<ll,ll> kien;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int m,n;
    cin >> m >> n;
    for (int i = 1; i <= m; ++i){
        cin >> a[i];
    }
    for (int i = 1; i <= n; ++i){
        ll t;
        cin >> t;
        kien[t]++;
    }
    for (int i = 1; i <= m; ++i){
        cout << kien[a[i]] << " ";
    } 
    return 0;
}