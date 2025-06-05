//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006];

ll pre[1000006], sur[1000006];

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
        pre[i] = __gcd(pre[i - 1], a[i]);
    }
    for (int i = n; i >= 1; --i){
        sur[i] = __gcd(sur[i + 1], a[i]);
    }
    ll t = 0;
    for (int i = 1; i <= n; ++i){
        t = max(t, __gcd(pre[i - 1], sur[i + 1]));
    }
    cout << t;
    return 0;
}