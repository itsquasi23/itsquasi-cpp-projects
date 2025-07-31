//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

const ll MAX = 4e6 + 6;

bool prime[MAX];

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

bool check(ll n, ll k){
    while (n){
        if (n % 10 == k) return 1;
        n /= 10;
    }
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    sieve();
    ll a,b,k, t = 0;
    cin >> a >> b >> k;
    for (int i = a; i <= b; ++i){
        if (!prime[i]){
            if (check(i, k)) t++;
        }
    }
    cout << t;
    return 0;
}