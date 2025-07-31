//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006], b[1000006];

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    ll mx = 0;
    for (int i = 1; i <= n; ++i){
        b[a[i]] = b[a[i] - 1] + 1;
        mx = max(mx, b[a[i]]);
    }
    cout << n - mx;
    return 0;
}