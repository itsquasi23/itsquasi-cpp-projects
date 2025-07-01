//Happy April 30!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

ll uoc(ll n) {
    ll t = 0;
    for (ll i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            t += i; // add divisor i
            if (i != n / i) {
                t += n / i; // add the complementary divisor n / i
            }
        }
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
    ll n;
    cin >> n;
    cout << uoc(n);
    return 0;
}