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
    double l, r;
    char c;
    cin >> l >> c >> r;
    switch (c)
    {
    case '+':
        cout << fixed << setprecision(2) << l + r;
        break;

    case '-':
        cout << fixed << setprecision(2) << l - r;
        break;

    case '*':
        cout << fixed << setprecision(2) << l * r;
        break;

    case '/':
        cout << fixed << setprecision(2) << l / r;
        break;

    default:
        break;
    }
    return 0;
}