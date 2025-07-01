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
    int n;
    cin >> n;
    ld ans = 0;
    for (int i = 1; i <= n; ++i){
        ans += 1.0 / (i * (i + 1));
    }
    cout << fixed << setprecision(4) << ans;
    return 0;
}