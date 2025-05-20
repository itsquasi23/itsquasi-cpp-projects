//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

ll a[1000006], b[1000006];

int main()
{
    /*if (fopen(".inp","r"))
    {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }*/
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n,t;
    cin >> n >> t;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
        b[i] = b[i - 1] + !(a[i] & 1);
    }
    while (t--){
        ll l,r;
        cin >> l >> r;
        cout << b[r] - b[l - 1] << " ";
    }
    return 0;
}