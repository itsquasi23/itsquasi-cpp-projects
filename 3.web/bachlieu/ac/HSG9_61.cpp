//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool prime[3000006];

void sieve(){
    prime[1] = prime[0] = 1;
    for (int i = 2; i * i < 3000006; ++i){
        if (!prime[i]){
            for (int j = i * i; j < 3000006; j += i){
                prime[j] = 1;
            }
        }
    }
}
ll pre[3000006];

bool check(ll x){
    ll t = 0;
    while (x){
        t += x % 10;
        x /= 10;
    }
    return t % 5 == 0;
}

void precom(){
    for (int i = 5; i < 3000000; ++i){
        pre[i] = pre[i - 1] + (!prime[i] && check(i));
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    sieve();
    precom();
    ll t;
    cin >> t;
    while (t--){
        ll l,r;
        cin >> l >> r;
        cout << pre[r] - pre[l - 1] << "\n";
    }
    return 0;
}