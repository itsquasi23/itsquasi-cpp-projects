//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006];

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    ll t;
    cin >> n >> t;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    multiset<ll> k;
    int res = 0;
    for (int i = 1, j = 1; j <= n; ++j){
        k.insert(a[j]);
        while (*k.rbegin() - *k.begin() > t){
            k.erase(k.find(a[i]));
            i++;
        }
        res = max(res, j - i + 1);
    }
    cout << res;
    return 0;
}