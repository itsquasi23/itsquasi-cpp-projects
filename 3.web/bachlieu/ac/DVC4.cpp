//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

unordered_map<ll,int> c;

int main()
{
    /*if (fopen(".inp","r"))
    {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }*/
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    int mx = 0;
    ll num = 0;
    for (int i = 1; i <= n; ++i){
        ll a;
        cin >> a;
        c[a]++;
        if (c[a] > mx){
            mx = c[a];
            num = a;
        }
        else if (c[a] == mx){
            num = min(num,a);
        }
    }
    cout << num << " " << mx;
    return 0;
}