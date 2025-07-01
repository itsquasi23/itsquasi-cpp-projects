// Goal: Get into CLC
// MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

const int ARR = 1000006;

bool prime[ARR];
int p[ARR];
int order = 1;

void sieve()
{
    prime[1] = prime[0] = 1;
    for (int i = 2; i * i < ARR; ++i)
    {
        if (!prime[i])
        {
            for (int j = i * i; j < ARR; j += i)
            {
                prime[j] = 1;
            }
        }
    }
    for (int i = 3; i < ARR; ++i)
    {
        if (!prime[i])
            p[order] = i, order++;
    }
}

bool checkpr(ll t){
    if (t == 2 || t == 3) return 1;
    if (t < 3 || t % 2 == 0 && t % 3 == 0) return 0;
    for (int i = 5; i * i <= t; i += 6){
        if (t % i == 0 || t % (i + 2) == 0) return 0;
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
    sieve();
    ll n;
    cin >> n;
    bool f;
    for (int j = 1; j < order; ++j)
    {
        ll ans =  4 + p[j] * p[j];

        if (ans <= n){
            if ((ans > 1000003 && checkpr(ans)) || (ans <= 1000003 && !prime[ans]))
            cout << 2 << " " << p[j] << " " << ans << "\n", f = 1;
        }

        else break;
    }
    if (!f)
        cout << -1;
    return 0;
}