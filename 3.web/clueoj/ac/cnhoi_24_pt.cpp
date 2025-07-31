//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006];

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    sort (a + 1, a + 1 + n, greater<ll>());
    ll s = 0;
    for (int i = 1; i <= n; ++i){
        if (a[i] - i + 1 > 0) s += a[i] - i + 1;
        else break;
    }
    cout << s;
    return 0;
}