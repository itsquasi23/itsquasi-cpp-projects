// Goal: Get into CLC
// MΔDE BY ITSQUΔSI
#include <iostream>
#define ll long long
#define ld long double

using namespace std;

int cnt(ll x)
{
    int d = 1;
    for (int i = 2; i * i <= x; ++i)
    {
        int c = 0;
        while (x % i == 0)
            c++, x /= i;
        d *= (c + 1);
    }
    if (x > 1) d *= 2;
    return d;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll n;
    cin >> n;
    cout << cnt(n);
    return 0;
}