//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

bool prime[1000006];

ll pre[1000006];

void sieve(){
    prime[1] = prime[0] = 1;
    for (int i = 2; i * i < 1000006; ++i){
        if (!prime[i]){
            for (int j = i * i; j < 1000006; j += i){
                prime[j] = 1;
            }
        }
    }
}

void precompute(){
    for (int i = 3; i < 1000000; ++i){
        pre[i] = pre[i - 1] + (!prime[i] && !prime[(i + 1) / 2]);
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
    precompute();
    ll a;
    cin >> a;
    while (a--){
        ll l,r;
        cin >> l >> r;
        cout << pre[r] - pre[l - 1] << "\n";
    }
    return 0;
}