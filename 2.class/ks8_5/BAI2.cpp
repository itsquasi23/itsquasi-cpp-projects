//Goal: Get into CLC
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
            for (int j = i * i; j <= 1000006; j += i) prime[j] = 1;
        }
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
    string a;
    cin >> a;
    ll t = 0, mx = 0;
    for (int i = 0; i < a.size(); ++i){
        if (a[i] >= '0' && a[i] <= '9'){
            t = t * 10 + (a[i] - '0');    
        }
        else {
            if (!prime[t]) mx = max(mx,t);
            t = 0;
        }
    }
    if (!prime[t]) mx = max(mx,t);
    cout << mx;
    return 0;
}