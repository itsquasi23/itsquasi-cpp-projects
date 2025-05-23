// Goal: Get into CLC
// MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

bool prime[1000006];

void sieve()
{
    prime[1] = prime[0] = 1;
    for (int i = 2; i * i < 1000006; ++i)
    {
        if (!prime[i])
        {
            for (int j = i * i; j < 1000006; j += i)
            {
                prime[j] = 1;
            }
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
    ll n, k;
    cin >> n >> k;
    int t = 0;
    for (int i = 3; i <= n; i += 2)
    {
        if (!prime[i] && (i - k >= 2) && !prime[i - k]){
            t++;
        }
    }
    cout << t;
    return 0;
}