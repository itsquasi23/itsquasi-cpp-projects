//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006], pf[1000006];

long double check(ll mid){
    long double sum = pf[mid];
    sum = sum * 1.0 / mid;
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    pf[0] = 0;
    for (int i = 1; i <= n; ++i){
        pf[i] = pf[i - 1] + a[i];
    }
    int m;
    cin >> m;
    while (m--){
        ll t;
        cin >> t;
        int l = 0, r = n, res = 0;
        while (l <= r){
            int mid = l + r >> 1;
            if (mid == 0 || check(mid) < t){
                res = mid;
                l = mid + 1;
            }
            else r = mid - 1;
        }
        cout << res << "\n";
    }
    return 0;
}