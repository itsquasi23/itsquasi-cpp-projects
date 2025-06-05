//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

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

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    sieve();
    int n, c = 0;
    cin >> n;
    vector<ll>primes;
    while(n--){
        ll a;
        cin >> a;
        if (!prime[a]) c++, primes.push_back(a);
    }
    cout << c << "\n";
    for (ll i : primes){
        prime[i] = 1;
    }
    for (int i = 2; i < 1000000; ++i){
        if (!prime[i]){
            cout << i;
            break;
        }
    }
    return 0;
}