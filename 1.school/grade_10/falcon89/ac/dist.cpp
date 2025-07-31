//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

pair<ll,ll> a[1000006];

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    ll k;
    cin >> n >> k;
    for (int i = 1; i <= n; ++i){
        cin >> a[i].first >> a[i].second;
    }
    vector<ll> wm;
    for (int i = 2; i <= n; ++i){
        for (int j = 1; j < i; ++j){
            ll x = min(abs(a[i].first - a[j].first) , abs(a[i].second - a[j].second));
            wm.push_back(x);
        }
    }
    sort(wm.begin() , wm.end());
    cout << wm[k-1];
    return 0;
}