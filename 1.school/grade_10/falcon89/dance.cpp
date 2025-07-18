//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006], b[1000006];

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int m,n;
    cin >> m >> n;
    for (int i = 1; i <= m; ++i){
        cin >> a[i];
    }
    for (int i = 1; i <= n; ++i){
        cin >> b[i];
    }
    sort (a + 1, a + 1 + m);
    sort (b + 1, b + 1 + n);
    int i = 1, j = 1, t = 0;
    while (i <= m && j <= n){
        if (a[i] > b[j]){
            t++;
            i++; j++;
        }
        else i++;
    }
    cout << t;
    return 0;
}