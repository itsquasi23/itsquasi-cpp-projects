//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

struct kien{
    ll h,b;
};

kien a[100005];

ll f[100005];

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
    for (int i = 1; i <= n; ++i){
        cin >> a[i].h;   
    }
    for (int i = 1; i <= n; ++i){
        cin >> a[i].b;
    }
    ll mx = 0;
    for (int i = 2; i <= n; ++i){
        f[i] = a[i].b;
        for (int j = 1; j < i; ++j){
            if (a[i].h > a[j].h){
                f[i] = max(f[i], f[j] + a[i].b);
            }
        }
        mx = max(mx, f[i]);
    }
    cout << mx;
    return 0;
}