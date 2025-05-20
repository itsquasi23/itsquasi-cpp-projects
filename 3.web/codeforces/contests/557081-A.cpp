//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

ll pf[1000006], wpf[1000006];

int main()
{
    /*if (fopen(".inp","r"))
    {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }*/
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; ++i){
        ll a;
        cin >> a;
        pf[i] = pf[i - 1] + a;
        wpf[i] = wpf[i - 1] + i * a;
    }
    while (q--){
        int l,r;
        cin >> l >> r;
        cout << (wpf[r] - wpf[l - 1]) - (l - 1) * (pf[r] - pf[l - 1]) << "\n";
    }
    return 0;
}