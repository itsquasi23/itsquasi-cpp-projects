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
    int t;
    ll c = 0;
    cin >> t;
    while (t--){
        ll l,r;
        cin >> l >> r;
        c += (ll)sqrt(r) - (ll)sqrt(l - 1);
    }
    cout << c;
    return 0;
}