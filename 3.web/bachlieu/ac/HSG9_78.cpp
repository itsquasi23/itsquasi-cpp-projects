//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

bool find(ll x){
    ll t = 0, x1 = x;
    while (x){
        t = t * 10 + (x % 10);
        x /= 10;
    }
    return t == x1;
}

bool prime[10000007];
ll p[1000006], order = 1;

void sieve(){
    prime[1] = prime[0] = 1;
    for (int i = 2; i * i < 10000000; ++i){
        if (!prime[i]){
            for (int j = i * i; j < 10000000; j += i){
                prime[j] = 1;
            }
        }
    }
    for (int i = 2; i < 10000000; ++i){
        if (!prime[i]){
            p[order] = i;
            order++;
        }
    }
}

bool find2(ll x){
    int c = 0;
    for (int i = 1; i < order; ++i){
        if (p[i] * p[i] > x) break;
        if (x % p[i] == 0){
            c++;
            while (x % p[i] == 0) x /= p[i];
        }
    }
    if (x > 1) c++;
    return c >= 3;
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
    ll a,b,c = 0;
    cin >> a >> b;
    for (int i = a; i <= b; ++i){
        if (find(i) && find2(i)){
            c += i;
        }
    }
    cout << c;
    return 0;
}