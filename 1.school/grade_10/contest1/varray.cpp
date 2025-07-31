//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006], t[1000006];

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) cin >> a[i];
    //for (int i = 1; i <= n; ++i) cin >> t[i];
    ll a1[n + 5];
    a1[n] = 0;
    for (int i = n; i >= 1; --i){
        if (a[i] > a[i + 1]) a1[i] = a1[i + 1] + 1;
        else a1[i] = 0;
    }
    for (int i = 1; i <= n; ++i) cout << a1[i] << " ";
    return 0;
}