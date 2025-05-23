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
    cout << a + b + c << "\n";
    double t = (a + b + c) / 2.0;
    double s = sqrt(t * (t - a) * (t - b) * (t - c));
    cout << fixed << setprecision(2) << s;
    return 0;
}