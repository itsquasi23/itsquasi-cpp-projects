//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006];
ll b[1000006];

ll ispw(ll n){
    for (int p : {2, 3, 5}){
        ll x = n;
        while (x % p == 0){
            x /= p;
        }
        if (x == 1) return 1;
    }
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n, m;
    cin >> n >> m;
    b[0] = 0;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    sort (a + 1, a + 1 + n);
    for (int i = 1; i <= n; ++i){
        b[i] = b[i - 1];
        if (ispw(a[i])) b[i]++;
    }
    while (m--){
        ll low, high;
        cin >> low >> high;
        ll l = lower_bound(a + 1, a + 1 + n, low) - a;
        ll r = upper_bound(a + 1, a + 1 + n, high) - a - 1;
        cout << b[r] - b[l - 1] << "\n";
    }
    return 0;
}