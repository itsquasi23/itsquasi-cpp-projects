//Chasing the goal...
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

map<int,int> kien;

int main()
{
    /*if (fopen(".inp","r"))
    {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }*/
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n, c = 0;
    ll t, sum = 0;
    cin >> n >> t;
    kien[0] = 1;
    while (n--){
        ll a;
        cin >> a;
        sum += a;
        sum %= t;
        c += kien[sum];
        kien[sum]++;
    }
    cout << c;
    return 0;
}