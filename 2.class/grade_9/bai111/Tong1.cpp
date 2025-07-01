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
    int n;
    cin >> n;
    ld t = 0;
    for (int i = 1; i <= 2 * n + 1; i += 2){
        t += 1.0 / (i * (i + 2));
    }
    cout << fixed << setprecision(10) << t;
    return 0;
}