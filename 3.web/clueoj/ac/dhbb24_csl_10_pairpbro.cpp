//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool prime[1000006];

void sieve(){
    prime[1] = prime[0] = 1;
    for (int i = 2; i * i <= 1000006; ++i){
        if (!prime[i]){
            for (int j = i * i; j <= 1000006; j += i) prime[j] = 1;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    sieve();
    int k, n, t = 0;
    cin >> n >> k;
    for (int i = 1; i <= n - k; ++i){
        if (!prime[i] && !prime[i + k]) t++;
    }
    cout << t;
    return 0;
}