//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

ll a[1000006];

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
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    sort (a + 1, a + 1 + n);
    int m;
    cin >> m;
    while (m--){
        ll s,f;
        cin >> s >> f;
        int c = 0;
        for (int i = 1; i <= n; ++i){
            if (a[i] >= s && a[i] <= f) ++c;
            else if (a[i] > f) break;
        }
        cout << c << "\n";
    }
    return 0;
}