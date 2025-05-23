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
    double n;
    cin >> n;
    double cv = 2 * n * 3.14;
    double dt = n * n * 3.14;
    cout << fixed << setprecision(2) << cv;
    cout << "\n";
    cout << fixed << setprecision(2) << dt;
    return 0;
}