//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

pair<ll,ll> a[1000006];

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll s;
    int n;
    cin >> s >> n;
    for (int i = 1; i <= n; ++i){
        cin >> a[i].first >> a[i].second;
    }
    sort(a + 1, a + 1 + n);
    int d = 0;
    for (int i = 1; i <= n; ++i){
        if (s <= a[i].first) break;
        d++;
        s += a[i].second;
    }
    if (d == n)
    cout << "YES";
    else cout << "NO " << n - d;
    return 0;
}