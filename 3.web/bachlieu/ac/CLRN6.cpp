//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

int main()
{
    /*if (fopen(".inp","r"))
    {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }*/
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    ll l = max(a,c), r = min(b,d);
    if (l > r) cout << 0;
    else cout << r - l + 1;
    return 0;
}