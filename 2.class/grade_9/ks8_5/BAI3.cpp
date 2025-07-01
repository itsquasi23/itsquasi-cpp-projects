//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

ll divs[1000006];

void sieve(){
    for (int i = 1; i <= 1000006; ++i){
        for (int j = i; j <= 1000006; j += i){
            divs[j] += i;
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
    int n;
    cin >> n;
    while (n--){
        ll a;
        cin >> a;
        cout << (2 * a <= divs[a]) << "\n";
    }
    return 0;
}