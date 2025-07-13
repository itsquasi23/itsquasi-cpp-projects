//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006], f[1000006];

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    int mx = 0;
    for (int i = 1; i <= n; ++i){
        int j = lower_bound(f + 1, f + 1 + mx, a[i]) - f;
        f[j] = a[i];
        mx = max(mx, j);
    }
    cout << mx;
    return 0;
}