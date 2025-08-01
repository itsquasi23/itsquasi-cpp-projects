//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[506][506];

bool prime[1000006];
vector<ll> primes;

void sieve(){
    prime[1] = prime[0] = 1;
    for (int i = 2; i * i < 1000006; ++i){
        if (!prime[i]){
            for (int j = i * i; j < 1000006; j += i){
                prime[j] = 1;
            }
        }
    }
    for (int i = 2; i < 1000006; ++i){
        if (!prime[i]) primes.push_back(i);
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    sieve();
    int m, n;
    cin >> m >> n;
    ll res = LLONG_MAX, t = 0;
    for (int i = 1; i <= m; ++i){
        for (int j = 1; j <= n; ++j){
            cin >> a[i][j];
            int i1 = lower_bound(primes.begin(), primes.end(), a[i][j]) - primes.begin();
            t += primes[i1] - a[i][j];
        }
        res = min(res, t), t = 0;
    }
    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= m; ++j){
            int i1 = lower_bound(primes.begin(), primes.end(), a[j][i]) - primes.begin();
            t += primes[i1] - a[j][i];
        }
        res = min(res, t), t = 0;
    }
    cout << res;
    return 0;
}