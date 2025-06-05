//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll prime[1000006];

void sieve(){
    prime[0] = prime[1] = 1;
    for (int i = 2; i * i < 1000000; ++i){
        if (!prime[i]){
            for (int j = i * i; j < 1000000; j += i){
                prime[j] = 1;
            }
        }
    }
}

ll sum(ll x){
    ll t = 0;
    while (x){
        t += x % 10;
        x /= 10;
    }
    return t;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    sieve();
    ll m,n,k, t = 0;
    cin >> m >> n >> k;
    for (int i = m + 1; i < n; ++i){
        if (!prime[i] && sum(i) % k == 0) t++;
    }
    cout << t;
    return 0;
}