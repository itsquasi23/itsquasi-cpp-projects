//Chasing the goal...
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
    ll n,m,a;
    cin >> n >> m >> a;
    n = ceil(n * 1.0 / a);
    m = ceil(m * 1.0 / a);
    cout << n * m;
    return 0;
}