//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<bool> sieve(ll l, ll r){
    ll sqr = sqrt(r);
    vector<bool> mk(sqr + 1, 0);
    vector<ll> primes;
    for (ll i = 2; i <= sqr; ++i){
        if (!mk[i]){
            primes.push_back(i);
            for (ll j = i * i; j <= sqr; j += i){
                mk[j] = 1;
            }
        }
    }
    vector<bool> pr(r - l + 1, 1);
    for (ll i : primes){
        for (ll j = max(i * i, (l + i - 1) / i * i); j <= r; j += i){
            pr[j - l] = 0;
        }
    }
    if (l == 1) pr[0] = 0;
    return pr;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll l, r;
    cin >> l >> r;
    vector<bool> pr = sieve(l, r);
    for (int i = l; i <= r; ++i){
        if (pr[i - l]) cout << i << " ";
    }
    return 0;
}