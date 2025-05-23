//2025 = 45² = (20+25)² = 5²*9² = (1+2+3+4+5+6+7+8+9)² = 1³+2³+3³+4³+5³+6³+7³+8³+9³
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[25];

int main()
{
    /*if (fopen(".inp","r"))
    {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }*/
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    ll s;
    cin >> s >> n;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    ll l = 1, r = 1e15, ans;
    while (l <= r){
        ll mid = (l + r) / 2;
        ll cake = 0;
        for (int i = 1; i <= n; ++i)
            cake += mid / a[i];
            if (cake >= s){
                ans = mid;
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
    }
    cout << ans;
    return 0;
}