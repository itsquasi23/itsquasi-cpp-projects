//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

unordered_map<ll,ll> kien;

ll a;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll m,n,k;
    cin >> m >> n >> k;
    for (int i = 1; i <= m*n; ++i){
        cin >> a;
        kien[a] ++;
    }
    vector<ll> val;
    for (auto i : kien){
        val.push_back(i.second);
    }
    sort(val.begin(), val.end(), greater<ll>());
    ll t = 0;
    for (int i = 0; i < k; ++i){
        t += val[i];
    }
    cout << t;
    return 0;
}