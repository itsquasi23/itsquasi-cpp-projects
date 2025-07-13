//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006];

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll n;
    cin >> n;
    a[0] = 0;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    ll t = 0;
    sort (a + 1, a + 1 + n, greater<ll>());
    for (int i = 1; i <= n; ++i){
        a[i] += a[i - 1];
    }
    for (int i = 1; i <= n; ++i){
        t += ((a[i] - a[i - 1]) * (n - i) - (a[n] - a[i]));
        //cout << a[i] - a[i - 1] << " " << n - i << " " << a[n] - a[i] << "\n";
    }
    cout << t;
    return 0;
}