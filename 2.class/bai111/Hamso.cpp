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
    ll a1,a2,b1,b2;
    cin >> a1 >> b1 >> a2 >> b2;
    if (a1 != a2 || (a1 == a2 && b1 == b2)) cout << "YES";
    else cout << "NO";
    return 0;
}