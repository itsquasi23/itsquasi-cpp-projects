//2025 = 45² = (20+25)² = 5²*9² = (1+2+3+4+5+6+7+8+9)² = 1³+2³+3³+4³+5³+6³+7³+8³+9³
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll sum(ll x){
    ll t = 0;
    while (x){
        t += x % 10;
        x /= 10;
    }
    return t;
}

int main()
{
    /*if (fopen(".inp","r"))
    {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }*/
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    //Code goes here:
    ll n;
    cin >> n;
    while (n){
        if (__gcd(n,sum(n)) > 1){
            cout << n;
            return 0;
        }
        n++;
    }
    return 0;
}