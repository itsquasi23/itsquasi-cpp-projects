// Happy April 30!
// MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

bool prime[1000006];

void sieve()
{
    prime[0] = prime[1] = 1;
    for (int i = 2; i * i <= 1000006; ++i)
    {
        if (!prime[i])
        {
            for (int j = i * i; j <= 1000006; j += i)
            {
                prime[j] = 1;
            }
        }
    }
}

bool pfac(ll x)
{
    int t = 0, c = 0;
        while (x % 2 == 0)
        {
            c++;
            x /= 2;
        }
        if (c == 1) ++t;
        else if (c > 1) return 0;
        c = 0;
    for (int i = 3; i * i <= x; i += 2)
    {
        if (!prime[i])
        {
            while (x % i == 0)
            {
                c++;
                x /= i;
            }
            if (c == 1) ++t;
            else if (c > 1) return 0;
            c = 0;
        }
    }
    if (x > 1 && !prime[x]) ++t;
    return t == 3;
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
    int c;
    cin >> c;
    while (c--)
    {
        ll n;
        cin >> n;
        cout << pfac(n) << "\n";
    }
    return 0;
}