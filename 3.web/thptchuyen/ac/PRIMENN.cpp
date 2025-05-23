//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

bool prime(ll x){
    if (x == 2 || x == 3) return 1;
    if (x < 3 || x % 2 == 0 || x % 3 == 0) return 0;
    for (int i = 5; i * i <= x; i += 6){
        if (x % i == 0 || x % (i + 2) == 0) return 0;
    }
    return 1;
}

int main()
{
    /*if (fopen(".inp","r"))
    {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }*/
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll n;
    cin >> n;
    while (!prime(n)){
        n++;
    }
    cout << n;
    return 0;
}