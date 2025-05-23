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
    int n,m,k;
    cin >> n >> m >> k;   
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    for (int i = 1; i <= m; ++i){
        cin >> b[i];
    }
    sort(a + 1, a + 1 + n);
    sort (b + 1, b + 1 + m);
    int j = 1;
    for (int i = 1; i <= n; ++i){
        if (b[j] - a[i] >= k){
            cout << a[i] << " " << b[j] << "\n";
            j++;
        }
        else j++, i--;
    }
    return 0;
}