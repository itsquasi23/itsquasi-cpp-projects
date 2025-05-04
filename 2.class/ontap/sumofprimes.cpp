//Happy April 30!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

bool prime[1000006];

void sieve(){
    prime[1] = prime[0] = 1;
    for (int i = 2; i * i <= 1000006; ++i){
        if (!prime[i]){
            for (int j = i * i; j <= 1000006; j += i){
                prime[j] = 1;
            }
        }
    }
}

bool op(ll x){
    ll t = 0, x1 = x;
    while (x){
        t = t * 10 + (x % 10);
        x /= 10;
    }
    return t == x1;
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
    int n;
    cin >> n;
    while (n--){
    int l,r;
    cin >> l >> r;
    ll t = 0;
    for (int i = l; i <= r; ++i){
        if (!prime[i] && op(i)) t += i;
    }
    cout << t << "\n";
    }
    return 0;
}