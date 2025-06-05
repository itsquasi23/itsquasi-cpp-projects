//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006], f[1000006];

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    ll s;
    cin >> n >> s;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    for (int i = 1; i <= s; ++i){
        f[i] = -1;
        for (int j = 1; j <= n; ++j){
            if (a[j] <= i && f[i - a[j]] != -1){
                if (f[i] != -1) f[i] = min(f[i], f[i - a[j]] + 1);
                else f[i] = f[i - a[j]] + 1;
            }
        }
    }
    cout << f[s];
    return 0;
}