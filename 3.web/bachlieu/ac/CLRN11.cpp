// Goal: Get into CLC
// MΔDE BY ITSQUΔSI
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
    ll n;
    cin >> n;
    switch (n)
    {
    case 2:
    case 3:
    case 4:
        cout << "Hoc li thuyet ";
        break;

    case 5:
    case 7:
        cout << "Nghi ";
        break;
    
    case 6:
        cout << "Lam bai tap ";
        break;

    default:
        break;
    }
    return 0;
}