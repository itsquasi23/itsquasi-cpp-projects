//Happy April 30!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

int main()
{
    if (fopen("tienphoto.inp","r"))
    {
        freopen("tienphoto.inp", "r", stdin);
        freopen("tienphoto.out", "w", stdout);
    }
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll l,m,n;
    cin >> l >> m >> n;
    ll cost = 0;
    if (l == 3){
        if (m == 1) cost = 600;
        else cost = 800;
    }
    else {
        if (m == 1) cost = 300;
        else cost = 400;
    }
    if (n >= 100) cost -= (50 * (l & 1 ? 2 : 1));
    cout << cost * n;
    return 0;
}