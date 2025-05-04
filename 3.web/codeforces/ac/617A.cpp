//Happy April 30!
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
    ll a;
    cin >> a;
    ll a5 = a / 5; a = a % 5;
    ll a4 = a / 4; a = a % 4;
    ll a3 = a / 3; a = a % 3;
    ll a2 = a / 2; a = a % 2;
    cout << a5 + a4 + a3 + a2 + a;
    return 0;
}