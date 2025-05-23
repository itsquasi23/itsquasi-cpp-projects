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
    ll t;
    cin >> t;
    if (t == 86400) cout << "0 0 0";
    else{
        ll h = t / 3600;
        ll m = (t - (h * 3600)) / 60;
        t = (t - (h * 3600) - (m * 60));
        cout << h << " " << m << " " << t;
    }
    return 0;
}