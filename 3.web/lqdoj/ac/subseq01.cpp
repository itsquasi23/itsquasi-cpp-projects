//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    while (n--){
        int t;
        cin >> t;
        ll a[t + 5];
        ll s1 = 0;
        for (int i = 1; i <= t; ++i){
            cin >> a[i];
        }
        ll s2c = a[1], s2 = a[1];
        for (int i = 2; i <= t; ++i){
            s2c = max(a[i], s2c + a[i]);
            s2 = max(s2, s2c);
        }
        sort (a + 1, a + 1 + t, greater<ll>());
        for (int i = 1; i <= t; ++i){
            if (a[i] > 0) s1 += a[i];
        }
        cout << (s1 == 0 ? a[1] : s1) << " ";
        cout << s2 << "\n";
    }
    return 0;
}