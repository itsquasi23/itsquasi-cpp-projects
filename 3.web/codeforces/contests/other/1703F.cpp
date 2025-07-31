// Welcome to your new home, CLCer ItsQuasi!
// MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<ll, ll>> a;
        vector<ll> b;
        for (int i = 1; i <= n; ++i)
        {
            ll s;
            cin >> s;
            if (s < i)
                a.push_back({s, i});
        }
        sort(a.begin(), a.end());
        ll t = 0, res = 0;
        for (auto i : a)
            b.push_back(i.first), t++;
        for (int i = 0; i < a.size(); ++i)
        {
            res += t - (upper_bound(b.begin(), b.end(), a[i].second) - b.begin());
        }
        cout << res << "\n";
    }
    return 0;
}