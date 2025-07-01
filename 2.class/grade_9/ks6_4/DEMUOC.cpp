//2025 = 45² = (20+25)² = 5²*9² = (1+2+3+4+5+6+7+8+9)² = 1³+2³+3³+4³+5³+6³+7³+8³+9³
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    /*if (fopen(".inp","r"))
    {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }*/
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    //Code goes here:
    ll n;
    cin >> n;
    ll mx = 0, div = 0;
    for (int i = 1; i < n; ++i) {
        int c = 0;
        for (int j = 1; j * j <= i; ++j) {
            if (i % j == 0) {
                c += 2;
                if (j * j == i) --c;
            }
        }
        if (c > div) {
            div = c;
            mx = i;
        }
    }
    cout << mx;
    return 0;
}