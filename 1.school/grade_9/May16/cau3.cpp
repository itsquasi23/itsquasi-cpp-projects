//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

bool prime[1000006];
ll p[1000006], order = 1;

bool dx(ll x){
    ll t = 0, x1 = x;
    while (x){
        t = t * 10 + (x % 10);
        x /= 10;
    }
    return t == x1;
}

void sieve(){
    prime[0] = prime[1] = 1;
    for (int i = 2; i * i < 1000006; ++i){
        if (!prime[i]){
            for (int j = i * i; j < 1000006; j += i){
                prime[j] = 1;
            }
        }
    }
    for (int i = 2; i < 1000006; ++i){
        p[i] = p[i - 1] + (!prime[i] && dx(i));
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
        int l,r;
        cin >> l >> r;
        cout << p[r] - p[l - 1] << "\n";
    }
    return 0;
}