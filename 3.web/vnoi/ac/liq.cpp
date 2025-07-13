//2025 = 45² = (20+25)² = 5²*9² = (1+2+3+4+5+6+7+8+9)² = 1³+2³+3³+4³+5³+6³+7³+8³+9³
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006];
int f[1000006];

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
    for (int i = 1; i <= n; ++i) cin >> a[i];
    int mx = 1;
    for (int i = 1; i <= n; ++i){
        f[i] = 1;
        for (int j = 1; j < i; ++j){
            if (a[j] < a[i]) f[i] = max(f[i], f[j] + 1);
        }
        mx = max(mx, f[i]);
    }
    cout << mx;
    return 0;
}
