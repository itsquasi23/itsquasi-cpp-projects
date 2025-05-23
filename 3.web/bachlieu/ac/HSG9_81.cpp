//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

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
    int cnt = 0;
    ll n3 = n / 3, n2 = n / 2;
    for (int i = 1; i * i <= n3; ++i){
        ll a = i * i;
        for (int j = i; j * j <= n2; ++j){
            ll b = j * j;
            ll c = n - a - b;
            ll m = sqrt(c);
            if (m * m == c && c >= b){
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}