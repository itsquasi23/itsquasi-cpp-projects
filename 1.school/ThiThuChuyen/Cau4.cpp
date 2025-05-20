//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

const int MAX = 5000006;

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
    /*if (fopen(".inp","r"))
    {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }*/
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
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