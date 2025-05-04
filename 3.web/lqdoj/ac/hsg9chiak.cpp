//2025 = 45² = (20+25)² = 5²*9² = (1+2+3+4+5+6+7+8+9)² = 1³+2³+3³+4³+5³+6³+7³+8³+9³
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[100006];
int t = 0;

unordered_map<ll, ll> cnt;

int main()
{
    /*if (fopen(".inp","r"))
    {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }*/
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    ll k;
    cin >> n >> k;
    ll s = 0;
    cnt[0] = 1;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
        s += a[i];
        ll rm = (s % k + k) % k;
        t += cnt[rm];
        cnt[rm]++;
    }
    cout << t;
    return 0;
}
