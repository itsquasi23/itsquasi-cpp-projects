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
    int k = (n + 1) / 2;
    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }
    ll s0 = 0, s1 = 0, res;
    for (int i = 0; i < k; ++i){
        s0 += a[(2 * i) % n];
        s1 += a[(2 * i + 1) % n];
    }
    res = max(s0, s1);
    for(int i = 2; i < n; i += 2){
        s0 = s0 - a[i - 2] + a[i - 1];
        res = max(res, s0);
    }
    for (int i = 3; i < n; i += 2){
        s1 = s1 - a[i - 2] + a[i - 1];
        res = max(res, s1);
    }
    cout << res;
    return 0;
}