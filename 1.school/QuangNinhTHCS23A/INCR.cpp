//Goal: Get into CLC
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
    int n;
    ll d;
    cin >> n >> d;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    int c = 0;
    for (int i = 2; i <= n; ++i){
        if (a[i] <= a[i - 1]){
            int x = (a[i - 1] - a[i]) / d + 1;
            c += x;
            a[i] += d * x;
        }
        cout << a[i] << " ";
    }
    cout << c;
    return 0;
}