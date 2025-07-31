//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
     int n, p;
    string s;
    cin >> n >> p >> s;

    ll res = 0;

    if (p == 2 || p == 5) {
        for (int i = 0; i < n; ++i) {
            if ((s[i] - '0') % p == 0)
                res += i + 1;
        }
    } else {
        map<int, ll> cnt;
        cnt[0] = 1;
        ll wm = 0, pow = 1;
        for (int i = n - 1; i >= 0; --i) {
            wm = (wm + (s[i] - '0') * pow) % p;
            res += cnt[wm];
            cnt[wm]++;
            pow = (pow * 10) % p;
        }
    }

    cout << res;
    return 0;
    return 0;
}   