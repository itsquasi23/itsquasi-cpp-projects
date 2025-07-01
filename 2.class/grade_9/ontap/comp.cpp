//Happy April 30!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

ll prime[1000006];

void sieve(){
    for (int i = 2; i * i <= 1000006; ++i){
        if (!prime[i]){
            for (int j = i * i; j <= 1000006; j += i){
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
    ll n;
    cin >> n;
    for (int i = 4; i <= n; i += 2){
        if (prime[n - i]){
            cout << i << " " << n - i;
            break;
        }
    }
    return 0;
}