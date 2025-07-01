//Goal: Get into CLC
//MΔDE BY ITSQUΔSI AND MY BROTHER
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;
vector<ll> adj;
ll cnt(ll x){
    int d = 1;
    for (int i = 2; i * i <= x; ++i){
        int c = 0;
        while (x % i == 0) c++, x /= i;
        d *= (c + 1);
    }
    if (x > 1) d *= 2;
    return d;
}
long long fast_power(long long a, long long b) {
    if (b == 0) return 1;
    if (a == 0) return 0;

    long long res = 1;
    while (b > 0) {
        if (b % 2 == 1) {
            res *= a;
        }
        if(res > 1000000000000000000) return 0;
        if(a > 1000000000000000000) return 0;
        a *= a;
        b /= 2;
    }
    return res;
}
ll lgx(ll x)
{
    ll res = 0 , c = 1000000000000000000;
    while(c > 0) c/=x ,res++;
    return res;
}
bool prime[1000006];

void sieve(){
    prime[1] = prime[0] = 1;
    for (int i = 2; i * i < 1000006; ++i){

        if (!prime[i]){
            for (int j = i * i; j < 1000006; j += i){
                prime[j] = 1;
            }
        }
    }
    for(int i = 1;i <= 1000004; ++i)
        if(!prime[i])
            adj.push_back(i);
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
    ll l,r, c = 0;
    cin >> l >> r;
    for(int i = 0 ;i <= 18 ; ++i){
        ll x  = adj[i];
            if(x == 2) continue;
            for(auto y : adj){
                if(lgx(y) < x-1) continue;
                ll check = fast_power(y , x - 1);
                if(check >= l && check <= r) c++;
            }

    }
    cout << c;
    return 0;
}