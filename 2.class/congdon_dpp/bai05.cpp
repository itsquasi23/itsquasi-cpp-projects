//Chasing the goal...
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

ll a[1000006];

int main()
{
    /*if (fopen(".inp","r"))
    {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }*/
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n,h;
    cin >> n >> h;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    ll sum = 0;
    for (int i = 1; i <= h; ++i){
        sum += a[i];
    }
    ll mx = sum;
    for (int i = h + 1; i <= n; ++i){
        sum += a[i] - a[i - h];
        mx = max(mx,sum);
    }
    cout << mx;
    return 0;
}