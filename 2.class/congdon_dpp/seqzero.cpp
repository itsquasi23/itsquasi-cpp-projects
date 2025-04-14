//Chasing the goal...
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

ll t = 0;
map<ll,ll> kien;

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
    ll sum = 0;
    kien[0] = 1;
    while (n--){
        ll a;
        cin >> a;
        sum += a;
        if (sum == 0) ++t;
        t += kien[sum];
        kien[sum]++;
    }
    cout << t;
    return 0;
}