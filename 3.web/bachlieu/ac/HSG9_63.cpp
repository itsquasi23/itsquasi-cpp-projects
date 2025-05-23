//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

int main()
{
    /*if (fopen(".inp","r"))
    {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }*/
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        ll a[n + 5];
        for (int i = 1; i <= n; ++i){
            cin >> a[i];
        }
        sort (a + 1, a + 1 + n);
        for (int i = 1; i <= n; ++i){
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}