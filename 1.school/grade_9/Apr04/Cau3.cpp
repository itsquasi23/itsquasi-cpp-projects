//2025 = 45² = (20+25)² = 5²*9² = (1+2+3+4+5+6+7+8+9)² = 1³+2³+3³+4³+5³+6³+7³+8³+9³
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006];

int main()
{
    /*if (fopen(".inp","r"))
    {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }*/
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    //Code goes here:
    int n;
    ll k;
    cin >> n >> k;
    vector<int> f(k,0);
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
        a[i] %= k;
        f[a[i]]++;
    }
    int res = min(f[0],1);
    for (int i = 1; i <= k/2; ++i){
        if (i == k - i) {
            res += min(f[i],1);
        }
        else {
            res += max(f[i], f[k - i]);
        }
    }
    cout << res;
    return 0;
}