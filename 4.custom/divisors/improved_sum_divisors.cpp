//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006];

ll l = 1e18, r = -1e18;

vector<ll> sieve(ll l, ll r){    
    vector<ll> sumdiv(r - l + 1, 0);

    for (ll i = 1; i * i <= r; ++i) {
        ll n = i * i;
        if (n >= l) {
            sumdiv[n - l] += i;
            n += i;
        } else {
            n = ((l + i - 1) / i) * i;
        }

        while (n <= r) {
            sumdiv[n - l] += i + n / i;
            n += i;
        }
    }
    return sumdiv;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int q;
    cin >> q;
    bool check = 1;
    for(int i = 1;i <= q ; ++i ) {
        cin >> a[i];
        l = min(l, a[i]);
        r = max(r, a[i]);
    }
    vector<ll> sd = sieve(l, r);
    for (int i = 1; i <= q; ++i){
        cout << sd[a[i] - l] << " ";
    }
    return 0;
}
