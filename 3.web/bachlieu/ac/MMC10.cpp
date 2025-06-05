//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll n, a;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    cin >> n;
    ll ans = -1;
    while (n--){
        cin >> a;
        ll tg = sqrt(a);
        if (tg * tg == a) ans = max(ans, a);
    }
    cout << ans;
    return 0;
}