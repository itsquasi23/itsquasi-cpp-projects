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
    ll a,b;
    cin >> a >> b;
    int y = 0;
    while (a <= b){
        a *= 3;
        b *= 2;
        ++y;
    }
    cout << y;
    return 0;
}