//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll d(ll a, ll b){
    return __gcd(a,b);
}

ll m(ll a,ll b){
    return a * b / __gcd(a,b);
}

bool prime[1000006];

void sieve(){
    prime[0] = prime[1] = 1;
    for (int i = 2; i * i < 1000006; ++i){
        if (!prime[i]){
            for (int j = i * i; j < 1000006; j += i){
                prime[j] = 1;
            }
        }
    }
}

ll find(ll x){
    int t = 0;
    for (int m = 1; m * m <= x; ++m){
        if (x % m == 0){
            ll n = x / m;
            if (d(m,n) == 1){
                t++;
                if (m != n) t++;
            }
        }
    }
    return t;
}


int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    /*ll c,d;
    cin >> c >> d;
    ll sum = LLONG_MAX;
    bool f = 0;
    for (int i = 1; i * i <= d; ++i){
        if (d % i == 0){
            ll a = 1ll * i;
            ll b = d / a * c;
            if (__gcd(a,b) == c) sum = min(sum, a + b), f = 1;
        }
    }
    if (f) cout << sum;
    else cout << -1;*/
    int n;
    cin >> n;
    while (n--){
        ll x;
        int t = 0;
        cin >> x;
        ll ans = 0;
        for (int i = 1; i * i <= x; ++i){
            if (x % i == 0){
                ll k = x / i + 1;
                ans += find(k);

                if (i * i != x){
                    ll x2 = x / i;
                    ll k2 = x / x2 + 1;
                    ans += find(k2);
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}