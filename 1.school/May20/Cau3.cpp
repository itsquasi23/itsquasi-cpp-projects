//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

bool prime[10000007];
ll p[10000007];

void sieve(){
    prime[1] = prime[0] = 1;
    for (int i = 2; i * i < 10000007; ++i){
        if (!prime[i]){
            for (int j = i * i; j < 10000007; j += i){
                prime[j] = 1;
            }
        }
    }
    for (int i = 2; i < 10000007; ++i){
        p[i] = p[i - 1] + (!prime[i]);
    }
}

int main()
{
    /*if (fopen(".inp","r"))
    {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }*/
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    sieve();
    int t;
    cin >> t;
    while (t--){
        ll l,r;
        cin >> l >> r;
        cout << p[r] - p[l - 1] << "\n";
    }
    return 0;
}