//Happy April 30!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

void fast(ll x){
    while (x % 2 == 0){
        cout << 2 << " ";
        x /= 2;
    }
    for (int i = 3; i * i <= x; i += 2){
        while (x % i == 0){
            cout << i << " ";
            x /= i;
        }
    }
    if (x > 1) cout << x;
}

int main()
{
    /*if (fopen(".inp","r"))
    {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }*/
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll a;
    cin >> a;
    fast(a);
    return 0;
}