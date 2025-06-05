//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool prime[3000006];

void sieve(){
    prime[0] = prime[1] = 1;
    for (ll i = 4; i <= 3000006; i += 2) prime[i] = 1; // mark evens
    for (ll i = 3; i * i <= 3000006; i += 2) {
        if (!prime[i]) {
            for (ll j = i * i; j <= 3000006; j += 2 * i) {
                prime[j] = 1;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    sieve();
    int t;
    cin >> t;
    if (!prime[t]) cout << t << " is prime.\n";
    else cout << t << " is not prime.\n";
    return 0;
}