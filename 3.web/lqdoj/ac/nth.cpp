//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll check(ll mid, ll a, ll b , ll p){
    return mid / a + mid / b - mid / p;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        ll a,b,n;
        cin >> a >> b >> n;
        ll l = 1, r = 1e18, res = 0;
        ll p = (a * b) / __gcd(a , b);
        while (l <= r){
            ll mid = l + r >> 1;
            if (check(mid, a, b , p) >= n){
                res = mid;
                r = mid - 1;
            }
            else l = mid + 1;
        }
        cout << res << "\n";
    }
    return 0;
}