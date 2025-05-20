//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

map<ll,ll> cnt;

int main()
{
    /*if (fopen(".inp","r"))
    {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }*/
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    cnt[0] = 1;
    ll c = 0, sum = 0;
    while (t--){
        ll a;
        cin >> a;
        sum += a;
        c += cnt[sum];
        cnt[sum]++;
    }
    cout << c;
    return 0;
}