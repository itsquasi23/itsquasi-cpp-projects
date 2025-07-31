//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool prime[1000006];

vector<ll> p;

void sieve(){
    prime[1] = prime[0] = 1;
    for (int i = 2; i * i < 1000006; ++i){
        if (!prime[i]){
            for (int j = i * i; j < 1000006; j += i){
                prime[j] = 1;
            }
        }
    }
    for (int i = 2; i < 1000000; ++i){
        if (!prime[i]) p.push_back(i);
    }
}

ll fastpow(ll x, ll y){
    ll res = 1;
    while (y){
        if (y & 1){
            res *= x;
        }
        x *= x;
        y /= 2;
    }
    return res;
}

ll sum_div(ll n){
    if (n == 1) return 1;
    ll res = 1;
    for (auto i : p){
        int c = 0;
        while (n % i == 0){
            n /= i;
            c++;
        }
        res *= (fastpow(i, c + 1) - 1) / (i - 1);
    }
    if (n != 1) res *= (n * n - 1) / (n - 1);
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    sieve();
    ll n;
    cin >> n;
    cout << sum_div(n);
    return 0;
}