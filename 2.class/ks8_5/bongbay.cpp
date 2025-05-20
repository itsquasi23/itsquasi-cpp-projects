//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

ll a[1000006], b[1000006];

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
        cin >> a[i];
    }
    /*for (int i = 2; i <= n; ++i){
        for (int j = 1; j < i; ++j){
            if (a[j] > a[i]) b[j]++;
        }
    }*/
    int q;
    cin >> q;
    while (q--){
        int l,r;
        cin >> l >> r;
        int c = 0;
        for (int i = l + 1; i <= r; ++i){
            for (int j = l; j < i; ++j){
                if (a[j] > a[i]) c++;
            }
        }
        cout << c << "\n";
    }
    return 0;
}