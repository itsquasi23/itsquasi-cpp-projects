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
    ll a,b,c;
    cin >> a >> b >> c;
    double t = (a + b + c) / 2.0;
    double s = sqrt(t * (t - a) * (t - b) * (t - c));
    double h = 2 * s / min({a,b,c});
    cout << fixed << setprecision(3) << h;
    return 0;
}