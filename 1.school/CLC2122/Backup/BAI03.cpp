//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006];

unordered_map<ll,ll> kien;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n,m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
        kien[a[i]]--;
    }
    int t = 0;
    while (m--){
        ll b;
        cin >> b;
        kien[b]++;
    }
    for (auto i : kien){
        if (i.second > 0)
        t += i.second;
    }
    cout << t;
    return 0;
}