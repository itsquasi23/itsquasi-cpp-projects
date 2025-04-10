//2025 = 45² = (20+25)² = 5²*9² = (1+2+3+4+5+6+7+8+9)² = 1³+2³+3³+4³+5³+6³+7³+8³+9³
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

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
    //Code goes here:
    int n,k;
    cin >> n >> k;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    ll u = 1, v = 1;
    bool f = 0;
    for (int i = 1; i <= n; ++i){
        ll sum = a[i];
        for (int j = i + 1; j <= n; ++j){
            sum += a[j];
            if ((long double)(sum / (j - i + 1)) == k && v < j - i + 1){
                v = j - i + 1;
                u = i;
                f = 1;
            }
        }
    }
    if (f)
    cout << u << "\n" << v;
    else cout << 0;
    return 0;
}