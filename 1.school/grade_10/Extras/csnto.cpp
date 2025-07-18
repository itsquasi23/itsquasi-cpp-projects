//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int MAX = 1000006;

bool prime[MAX];
ll pr[MAX];

ll digit(ll n){
    return n > 0 ? (ll)log10(n) + 1 : 1;
}

void sieve(){
    prime[1] = prime[0] = 1;
    for (int i = 2; i * i <= MAX; ++i){
        if (!prime[i]){
            for (int j = i * i; j <= MAX; j += i){
                prime[j] = 1;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    sieve();
    ll k, a, b;
    cin >> k >> a >> b;
    ll t = 0;
    for (int i = a; i <= b; ++i){
        if (digit(i) == k && !prime[i]) t++;
    }
    cout << t;
    return 0;
}